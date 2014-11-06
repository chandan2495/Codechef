#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <cmath>
#include <cstdio>
#include <algorithm>
#include <fstream>
using namespace std;
#define MAX_SIZE 100001

void factorial2 (unsigned int num, unsigned int *fact) {
    fact[num]++;
    return;
}

double mylog(double x) {
    double normalizer = 1000000007.0;
    return log10(x)/log10(normalizer);
}

int main() {
    string in;
    cin >> in;
    if (in.size() == 1) {
        cout << 1 << endl;
        return 0;
    }
    map<char, int> freq;
    for(int i=0; i<in.size(); ++i) {
        if (freq.find(in.at(i)) == freq.end())
            {
            freq[in.at(i)] = 1;
        } else {
            freq[in.at(i)]++;
        }
    }
    map<char, int> ::iterator itr = freq.begin();
    unsigned long long int count = 1;
    bool first = true;
    unsigned long long int normalizer = 1000000007;
    unsigned long long int size = 0;
    unsigned int fact[MAX_SIZE] = {0};
    vector<unsigned int> numerator;
    while (itr != freq.end()) {
        if (first == true) {
            first = false;
        } else {
            for (size_t i=1; i<=itr->second/2; ++i) {
                factorial2(i, fact);
                numerator.push_back(size+i);
            }
        }
        size += itr->second/2;
        ++itr;
    }
    //This loop is to cancel out common factors in numerator and denominator
    for (int i=MAX_SIZE-1; i>1; --i) {
        while (fact[i] != 0) {
            bool not_div = true;
            vector<unsigned int> newNumerator;
            for (size_t j=0; j<numerator.size(); ++j) {
                if (fact[i] && numerator[j]%i == 0) {
                    if (numerator[j]/i > 1)
                        newNumerator.push_back(numerator[j]/i);
                    fact[i]--;  //Do as many cancellations as possible
                    not_div = false;
                } else {
                    newNumerator.push_back(numerator[j]);
                }
            }
            numerator = newNumerator;
            if (not_div) {
                break;
            }
        }
    }
    double countD = 0.0;
    for (size_t i=0; i<numerator.size(); ++i) {
        countD += mylog(double(numerator[i]));
    }
    for (size_t i=2; i <MAX_SIZE; ++i) {
        if (fact[i]) {
            countD -= mylog((pow(double(i), double(fact[i]))));
            fact[i] = 0;
        }
    }
    //Get the fraction part of countD
    countD = countD - floor(countD);
    countD = pow(double(normalizer), countD);
    if (floor(countD + 0.5) > floor(countD)) {
        countD = ceil(countD);
    } else {
        countD = floor(countD);
    }
    count = countD;
    cout << count;
    return 0;
}
