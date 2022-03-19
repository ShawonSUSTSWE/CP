#include<bits/stdc++.h>

using namespace std;

int main ()

{
    cout << " >>Stack Operation using Array<<\n";
    cout << "Enter the max size of the stack (within 1000) : " ;
    int top = -1, maximum, choice, num;
    cin >> maximum;
    int  st[1000];
    while(1)
    {
        cout << "Which operation do you want to perform ?\n\n1.Push\n2.Pop\n3.Display\n\n";
        cin >> choice;
        switch(choice)
        {
            case 1 :
                    if(top >= maximum-1)
                    {
                        cout << "OVERFLOW!!!!!\n";
                    }
                    else
                    {
                        cout << "Enter the number you want to push : ";
                        cin >> num;
                        top++;
                        st[top] = num;
                    }
                    break;
            case 2 :
                    if(top < 0)
                    {
                        cout << "UNDERFLOW!!!!!\n";
                    }
                    else
                    {
                        cout << st[top] << " has been popped\n";
                        top--;
                    }
                    break;
            case 3 :
                    if ( top < 0 )
                        cout << "Stack is empty\n";
                    else
                    {
                        cout << "Displaying the numbers......\n\n";
                        cout << "Current Stack -> ";
                        for ( int i = top; i >= 0; i-- )
                        {
                            cout << st[i] << " ";
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
