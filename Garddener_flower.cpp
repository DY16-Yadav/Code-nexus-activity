#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of days : ";
    cin >> n;

    int sunbuds = 0, moonblossoms = 0, starroots = 0, crystalFlowers = 0, wildleafs = 0, restingDays = 0;
    int totalFlowers = 0;

    for (int i = 1; i <= n; ++i) {
        if (i % 2 == 0 && i% 3 == 0 && i % 4 == 0) {
            
            restingDays++;
        }
        else if (i % 2 == 0 && i % 3 == 0) {
            
            crystalFlowers += 1;
            totalFlowers += 1;
        }
        else if (i % 2 == 0) {
            
            sunbuds += 2;
            totalFlowers += 2;
        }
        else if (i % 3 == 0) {
            
            moonblossoms += 3;
            totalFlowers += 3;
        }
        else if (i % 4 == 0) {
        
            starroots += 4;
            totalFlowers += 4;
        }
        else {
            
            wildleafs += 1;
            totalFlowers += 1;
        }
    }

    cout << "\nResults after " << n << " days:\n";
    cout << "Sunbuds: " << sunbuds << endl;
    cout << "Moonblossoms: " << moonblossoms << endl;
    cout << "Starroots: " << starroots << endl;
    cout << "Crystal Flowers: " << crystalFlowers << endl;
    cout << "Wildleafs: " << wildleafs << endl;
    cout << "Resting Days: " << restingDays << endl;
    cout << "Total Flowers Planted: " << totalFlowers << endl;

    return 0;
} 
