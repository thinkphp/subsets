#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	vector<int> stack;

    cout<<"n=";
	cin>>n; 

	stack.push_back(1);

	for (vector<int>::size_type i = 0; i < stack.size(); ++i)
	{
		cout<<stack[i]<<endl;
	}

    while(!stack.empty()) {

          if(stack.back() < n) {

          	 stack.push_back(stack.back() + 1);

          } else {

             stack.pop_back();

             if(!stack.empty()) {
                 stack.back()++;              
             }
          }

          for(vector<int>::size_type i = 0; i < stack.size(); ++i)    

                 cout<<stack[i]<<" ";          	

     
          cout<<endl;
    }    

	return 0;
}
