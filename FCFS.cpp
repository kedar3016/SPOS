#include <iostream>
using namespace std;

int main() {
    int i, j, n,  p[30], bt[30], wt[30], tat[30];
    float awt = 0;
	float atat = 0;

    cout << "Enter the number of process: ";
    cin >> n; 

    cout << "Enter the process number: ";
    for (i = 0; i < n; i++) {
        cin >> p[i];  
    }
    cout << "Enter the burst time of the process: ";
    for (i = 0; i < n; i++) {
        cin >> bt[i]; 
    }
   cout << "process\tburst time\twaiting time\tturnaround time\n";
    for (i = 0; i < n; i++) {
        wt[i] = 0;
        tat[i] = 0;

        for (j = 0; j < i; j++) {
            wt[i]= wt[i]+bt[j];
        }
        tat[i] = wt[i] + bt[i];
        awt = awt + wt[i];
        atat = atat + tat[i];
        cout << p[i] << "\t\t" << bt[i] << "\t\t" << wt[i] << "\t\t" << tat[i] << endl;
    }
    awt = awt / n;
    atat = atat / n;

    cout << "Average waiting time " << awt << endl;
    cout << "Average turnaround time " << atat << endl;
}
