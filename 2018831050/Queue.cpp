#include<bits/stdc++.h>

using namespace std;

int main ()

{
    cout << " >>Queue Operation using Array<<\n";
    cout << "Enter the max size of the queue (within 1000) : " ;
    int first = -1, maximum, choice, num, rear = -1;
    cin >> maximum;
    int  q[1000];
    while(1)
    {
        cout << "Which operation do you want to perform ?\n\n1.Push\n2.Pop\n3.Display\n\n";
        cin >> choice;
        switch(choice)
        {
            case 1 :
                    if(rear >= maximum-1)
                    {
                        cout << "OVERFLOW!!!!!\n";
                    }
                    else
                    {
                        if (first == -1 )
                        {
                            first++;
                        }
                        cout << "Enter the number you want to push : ";
                        cin >> num;
                        rear++;
                        q[rear] = num;
                    }
                    break;
            case 2 :
                    if(first < 0)
                    {
                        cout << "UNDERFLOW!!!!!\n";
                    }
                    else
                    {
                        cout << q[rear] << " has been popped\n";
                        rear--;
                        if ( rear == -1 )
                            first--;
                    }
                    break;
            case 3 :
                    if ( first < 0 )
                        cout << "Queue is empty\n";
                    else
                    {
                        cout << "Displaying the numbers......\n\n";
                        cout << "Current Queue -> ";
                        for ( int i = first; i <= rear; i++ )
                        {
                            cout << q[i] << " ";
                        }
                        cout << endl;
                    }
                        break;
            default :
                    cout << "Please Enter 1/2/3\n";
                    break;
        }
        cout << "Do you wish to Exit ? (Y/N)";
        char finish;
        cin >> finish;
        if ( finish == 'Y')
            break;
    }
    return 0;
}
