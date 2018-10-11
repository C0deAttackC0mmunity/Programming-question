/* submitted by manish*/
# include <bits/stdc++.h>
using namespace std;
int main()
{
    string st;
    cin>>st;
    if(st[8] == 'A')
    {
        if(st[0] == '1' and st[1] == '2')
        {
            st[0] = '0';
            st[1] = '0';
        }
    }

    else
    {
        if(st[0] == '0' and st[1] == '1')
            {
                st[0] = '1';
                st[1] = '3';
            }

        else if(st[0] == '0' and st[1] == '2')
            {
                st[0] = '1';
                st[1] = '4';
            }
        else if(st[0] == '0' and st[1] == '3')
            {
                st[0] = '1';
                st[1] = '5';
            }
        else if(st[0] == '0' and st[1] == '4')
            {
                st[0] = '1';
                st[1] = '6';
            }
        else if(st[0] == '0' and st[1] == '5')
            {
                st[0] = '1';
                st[1] = '7';
            }
        else if(st[0] == '0' and st[1] == '6')
            {
                st[0] = '1';
                st[1] = '8';
            }
        else if(st[0] == '0' and st[1] == '7')
            {
                st[0] = '1';
                st[1] = '9';
            }
        else if(st[0] == '0' and st[1] == '8')
            {
                st[0] = '2';
                st[1] = '0';
            }
        else if(st[0] == '0' and st[1] == '9')
            {
                st[0] = '2';
                st[1] = '1';
            }
        else if(st[0] == '1' and st[1] == '0')
            {
                st[0] = '2';
                st[1] = '2';
            }
        else if(st[0] == '1' and st[1] == '1')
            {
                st[0] = '2';
                st[1] = '3';
            }
    }

    for(int i=0;i<8;i++)
        cout<<st[i];
    cout<<endl;
    return 0;
}
