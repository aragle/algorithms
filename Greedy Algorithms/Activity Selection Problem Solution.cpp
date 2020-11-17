#include <bits/stdc++.h>

using namespace std;

struct Activity
{
    int start, finish;
};

bool sortActivity(Activity s1, Activity s2)
{
    return (s1.finish< s2.finish);
}

void maxActivities(Activity arr[], int n)
{
	sort(arr, arr+n, sortActivity);

	cout<< "\n\nSelected Activities are\n\n";

    int i = 0;
	cout<< "(" <<arr[i].start<< ", " <<arr[i].finish << ")\n";

    for (int j = 1; j < n; j++)
    {
      	if (arr[j].start>= arr[i].finish)
      	{
			cout<< "(" <<arr[j].start<< ", "<<arr[j].finish << ") \n";
			i = j;
      	}
    }
}

int main()
{
    int N;
    cout << "Number of Activity: ";
    cin >> N;
    cout << endl;
    Activity arr[N];
	for(int i=0; i<=N-1; i++)
	{
		cout<<"Enter the start and end time of activity " << i+1 << ": ";
		cin>>arr[i].start>>arr[i].finish;
    }

	maxActivities(arr, N);
    return 0;
}
