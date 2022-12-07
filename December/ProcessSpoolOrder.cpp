#include <iostream>
#include <iomanip>

using namespace std;


void getOrder(int &spoolsOrdered, int &spoolsInStock, char &customChargeInput, double &customCharge) {
    
    do {
        cout << "Please enter the number of spools ordered: ";
        cin >> spoolsOrdered;
        if (spoolsOrdered < 1) {
            cout << "Error, the number of spools must be at least 1." << endl;
        }
    } while(spoolsOrdered < 1);

    do {
        cout << "Please enter the number of spools in stock: ";
        cin >> spoolsInStock;
        if (spoolsInStock < 0) {
            cout << "Error, the spools in stock should be 0 or more." << endl;
        }
    } while(spoolsInStock < 0);
    
    cout << "Is there a custom shipping and handling charge (Enter Y for Yes or N for No)? ";
    cin >> customChargeInput;
    if (toupper(customChargeInput) == 'Y') {
        do {
            cout << "What is the shipping and handling charge? ";
            cin >> customCharge;
            if (customCharge < 0.00) {
                cout << "Error, the charge must be at least $0.00." << endl;
            }
        } while(customCharge < 0.00);
    }
}

int calcBackorder(int spoolsOrdered, int spoolsInStock) {
    int backorders = 0;
    if (spoolsOrdered > spoolsInStock) {
        backorders = spoolsOrdered - spoolsInStock;
    }
    return backorders;
}

double calcShipping(int spoolsReady, double defaultCharge = 20.95) {
    double shippingAndHandeling = spoolsReady * defaultCharge;
    return shippingAndHandeling;
}

void printResults(int spoolsReady, double shippingCharges, double allSpoolsCost, int backorder, double totalCharges) {

    cout.precision(2);
    cout << fixed;
    cout << endl;
    
    cout << "Spools ready for shipping: " << spoolsReady << endl;
    if (backorder > 0) {
        cout << "Spools on back order: " << backorder << endl;
    }
    cout << "Charges for " << spoolsReady << " spools: $" << allSpoolsCost << endl;
    cout << "Shipping and handling for " << spoolsReady << " spools: $" << shippingCharges << endl;
    cout << "Total charges (Incl. shipping & handling): $" << totalCharges << endl;

}

int main() {
    double spoolCost = 157.55;
    int spoolsOrdered; // done
    int spoolsInStock; // done
    int spoolsReady; // calcualted
    double allSpoolsCost; // calculated
    int backorder = 0; // calculated

    double totalCharges; // calculated
    
    char customChargeInput; // done
    double customCharge; // calculated
    double shippingCharges; // calculated

    getOrder(spoolsOrdered, spoolsInStock, customChargeInput, customCharge);
    backorder = calcBackorder(spoolsOrdered, spoolsInStock);
    spoolsReady = spoolsOrdered - backorder;
    if (toupper(customChargeInput) == 'Y') {
        shippingCharges = calcShipping(spoolsReady, customCharge);
    } else {
        shippingCharges = calcShipping(spoolsReady);
    }
    allSpoolsCost = (double)spoolsReady * (double)spoolCost;
    totalCharges = allSpoolsCost + shippingCharges;

    printResults(spoolsReady, shippingCharges, allSpoolsCost, backorder, totalCharges);

}