#include<iostream>
#include<list>
using namespace std;
void display(list<int>&bigo){
    list<int>::iterator kkr;
    for(kkr=bigo.begin();kkr!=bigo.end();kkr++){

        cout<<*kkr<<" ";
    }
    cout<<endl;

}

int main(){
  list<int>list1;//this is an empty list//
  list<int>list2(3);//this is an list of size 3, with no data//
  list1.push_back(3);
  list1.push_back(4);
  list1.push_back(1);

 list<int>::iterator huskey;
 huskey=list2.begin();
 *huskey=12;
 huskey++;
 *huskey=11;
 huskey++;
 *huskey=90;



 // list<int>::iterator jj;
  //jj=list1.begin();
 // cout<<*jj<<" ";
 // jj++;
 // cout<<*jj<<" ";
  //jj++;
  //cout<<*jj<<" ";
  display(list1);
  //list1.pop_back();
  //list1.pop_front();
 // list1.remove(4);
 //sorting the list elements//
 list1.sort();
  display(list1);

  display(list2);
   list2.sort();
   display(list2);
   list1.merge(list2);
   display(list1);
  return 0;
}
