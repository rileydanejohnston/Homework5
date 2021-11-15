// Riley Johnston
// CS137
// Homework 5

#include "TwoDayPackage.h"
#include <iostream>
using namespace std;

TwoDayPackage::TwoDayPackage(const string &sendName, const string &sendAdd, const string &sendCity, const string &sendState, const string &sendZip, const string &destName, const string &destAdd, const string &destCity, const string &destState, const string &destZip, double ounces, double cost, double twoDayFlatFee):
Package(sendName, sendAdd, sendCity, sendState, sendZip, destName, destAdd, destCity, destState, destZip, ounces, cost)
{
    setFlatFee(twoDayFlatFee);
}

TwoDayPackage& TwoDayPackage::setFlatFee(double twoDayFlatFee)
{
    flatFee = (twoDayFlatFee >= 0.0) ? twoDayFlatFee : 0.0;
    return *this;
}

double TwoDayPackage::getFlatFee() const
{
    return flatFee;
}

double TwoDayPackage::calculateCost() const
{
    return getFlatFee() + Package::calculateCost();
}

void TwoDayPackage::print() const
{
    Package::print();
    cout << "Flat fee: $" << getFlatFee() << endl;
    cout << "---------------------" << endl;
}
