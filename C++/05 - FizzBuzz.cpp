#include <iostream>
using namespace std:
int main()
{
    int cout;
    
    cout << "Max Range:";
    cin >> cout;
    int position = 1;
    if( cout > 0 )
    do
    {
        cout << position << endl;
        position++;
        cout--;
    } while( cout > 0 );
    
    return 0;
}
