#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s="ejiufgbok";
    string *ptr=&s;


    cout<<ptr<<endl;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int b[5]={1,2,3,4};
    char *ptr;
    char a='a';
    ptr=&a;
    // char **s=&ptr;
    // char str[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
    // int a=0;

    cout<<ptr<<endl;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int b[5]={1,2,3,4};
    char *ptr;
    char a='3';
    ptr=&a;
    char **s=&ptr;
    // int a=0;

    cout<<s<<endl;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int b[5]={1,2,3,4};
    char *ptr;
    int a=0;
    ptr=&a;
    char Str[]="zxcvbn";
    ptr=Str;
    ptr+=5;
    cout<<ptr;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int b[5]={1,2,3,4};
    char *ptr;
    char Str[]="zxcvbn";
    ptr=Str;
    ptr+=5;
    cout<<ptr;
    return 0;
}
