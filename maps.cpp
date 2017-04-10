#include <set>
#include <vector>
#include <map>
#include <sstream>
#include <fstream>
#include <iostream>
#include <utility>
using namespace std;
int main(int argc, char *argv[])
{
 
    vector<string> tokens;
    string next_line;  // Each data line
    ifstream in(argv[1]);
    while (getline(in, next_line)) {
        istringstream iss(next_line);
        string token;
        while (iss >> token) {
            string nopunct = "";
            for(auto &c : token) { // Remove Punctuation      
                if (isalpha(c)) {
                    nopunct +=c;       
                }
            }
	        tokens.push_back(nopunct);
	    }
    }
    cout << "Number of words "<<tokens.size()<<endl;
  
    // maps
    map <string, int> wordcount;

    for(auto s:tokens) {
        wordcount[s]++;
    }
    for (map<string,int>::iterator it=wordcount.begin(); it!=wordcount.end(); ++it)
        cout << it->first<<' ' << it->second<<endl;
    cout << endl;
}
