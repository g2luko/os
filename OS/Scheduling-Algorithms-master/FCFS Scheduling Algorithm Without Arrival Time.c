#include <stdio.h>

struct proc {
    int no;
    int bt;
    int ct;
    int tat;
    int wt;
};

struct proc readProcess(int i) {
    struct proc p;
    printf("\nEnter details for Process %d\n", i);
    p.no = i;
    printf("Enter Burst Time: ");
    scanf("%d", &p.bt);
    return p;
}

int main() {
    struct proc processes[10];
    float avgTat = 0, avgWt = 0;
    int n, currentTime = 0;

    printf("<-- FCFS Scheduling Algorithm Without Arrival Time (Non-Preemptive) -->\n");
    printf("Enter Number of Processes: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        processes[i] = readProcess(i + 1);

    printf("\nProcessNo BT CT TAT WT RT\n");

    for (int i = 0; i < n; i++) {
        currentTime += processes[i].bt;
        processes[i].ct = currentTime;
        processes[i].tat = processes[i].ct;
        avgTat += processes[i].tat;
        processes[i].wt = processes[i].tat - processes[i].bt;
        avgWt += processes[i].wt;
        printf("P%d %d %d %d %d %d\n", processes[i].no, processes[i].bt, processes[i].ct, processes[i].tat, processes[i].wt, processes[i].wt);
    }

    avgTat /= n;
    avgWt /= n;

    printf("\nAverage Turnaround Time=%f\nAverage Waiting Time=%f", avgTat, avgWt);

    return 0;
}
