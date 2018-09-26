#include "std_lib_facilities.h"

int main()
{
cout<<"Enter the name of the person you want to write to: \n";
string first_name;
cin>>first_name;
cout<<"Dear "<<first_name<<",\n";
cout<<"It's been a long time since we met and I miss you. Hope you're doing well.\n";
cout<<"Do you remember that person we met together at the park? I've almost forgotten him/her, could you tell me what was his/her name?\n";
string friend_name;
cin>>friend_name;
cout<<"Oh, I remember now, have you seen "<<friend_name<<" since then?\n";
char friend_sex;
cout<<"Could you tell me "<<friend_name<<"'s gender? Write 'm' if male or 'f' is female.\n";
cin>>friend_sex;
if (friend_sex == 'm')
cout<<"If you see "<<friend_name<<" please ask him to call me.\n";
else if (friend_sex == 'f')
cout<<"If you see "<<friend_name<<" please ask her to call me.\n";
int age;
cout<<"Could you tell me how old are you?\n";
cin>>age;
if (age<=0 or age>=110)
simple_error("You're kidding!");
else if(age < 12)
cout<<"Next year you will be "<<++age<<", that's awesome!\n";
else if (age == 17)
cout<<"You will be able to vote next year!\n";
else if (age > 70)
cout<<"I hope you enjoying your retirement!\n";
cout<<"Yours sincerely,\n\n";
cout<<"Kristóf Pankotai\n";
}
//Az angol részre nem vállalok garanciát nyelvtanilag.. :D
