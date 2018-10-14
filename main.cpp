#include <iostream>
#include <vector>
#include <string>

using namespace std;
///////////////  WORRYCOUNTER  //////////////////////////
int WorryCounter(const vector<bool>& stack) {
    int sum=0;
    for (bool c: stack) {
        if (c==true) {
            sum += 1;
        }
    }
    return sum;
}
//////////////  INPUTPROCESSOR  ///////////////////////////
void InputProcessor(vector<bool>& stack, vector<int>& res, int& q) {
    int ind;
    string word;
    for(int i=0;i<q;i++) {
        cin >> word;
        //cout << ind << endl;
        if (word == "WORRY_COUNT") {
            //cout << "WORRY_COUNT COMPLETED" << endl;
            res.push_back(WorryCounter(stack));
        } else {
            cin >> ind;
            //cout << "ELSE COMPLETED" << endl;
            //res.push_back(0);
            /*cin >> ind;*/
            //cout << ind << endl;
            if (word == "WORRY") {
                //cout << "WORRY COMPLETED"<<endl;
                stack[ind] = 1;
            } else if (word == "QUIET") {
                stack[ind] = 0;
            } else if (word == "COME") {
                stack.resize(stack.size()+ind, false);
                //cout << "COME COMPLETED"<<endl;
                /*if (ind < 0) {
                    for (int k = 0; k > ind; k--)
                        stack.pop_back();
                } else if (ind > 0) {
                    for (int k = 0; k < ind; ++k) {
                        stack.push_back(0);
                    }
                }*/
            }
            //else  {cout << "ERROR"<<endl;}
        }
    }
}
////////////  MAIN  //////////////////////////////////
int main() {
    vector<bool> stack;
    vector<int> res;
   int q;
   cin >> q;
   InputProcessor(stack,res,q);
   for (auto c:res) {
           cout << c << endl;
   }
   return 0;
}
/*int main() {
    string word;
    int ind,q;
    vector<int> stack,res;
    cin >>q;
    for(int i=0;i<q;i++) {
        cin >> word;
        //cout << ind << endl;
        if (word == "WORRY_COUNT") {
            cout << "WORRY_COUNT COMPLETED" << endl;
            res.push_back(WorryCounter(stack));
        } else {
            cin >> ind;
            cout << "ELSE COMPLETED" << endl;
            res.push_back(0);
            //cout << ind << endl;
            if (word == "WORRY") {
                cout << "WORRY COMPLETED"<<endl;
                stack[ind] = 1;
            } else if (word == "QUIET") {
                stack[ind] = 0;
            } else if (word == "COME") {
                cout << "COME COMPLETED"<<endl;
                if (ind < 0) {
                    for (int k = 0; k > ind; k--)
                        stack.pop_back();
                } else if (ind > 0) {
                    for (int k = 0; k < ind; ++k) {
                        stack.push_back(0);
                    }
                }
            }
            else  {cout << "ERROR"<<endl;}
        }
    }
    cout << "RESULTS:" << endl;
    for (auto w:res){cout << w << endl;}
    cout << "DIVIDER"<<endl<<"STACK"<<endl;
    for (auto c:stack) {
        cout << c << endl;
    }
} */