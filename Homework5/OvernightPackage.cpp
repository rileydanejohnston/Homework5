// Riley Johnston
// CS137
// Homework 5

#include "OvernightPackage.h"
#include <iostream>
using namespace std;

OvernightPackage::OvernightPackage(const string &sendName, const string &sendAdd, const string &sendCity, const string &sendState, const string &sendZip, const string &destName, const string &destAdd, const string &destCity, const string &destState, const string &destZip, double ounces, double costPerOz, double addOzFee):
Package(sendName, sendAdd, sendCity, sendState, sendZip, destName, destAdd, destCity, destState, destZip, ounces, costPerOz)
{
    setExtraFeePerOz(addOzFee);
}

OvernightPackage& OvernightPackage::setExtraFeePerOz(double addOzFee)
{
    extraFeePerOz = (addOzFee >= 0.0) ? addOzFee : 0.0;
    return *this;
}

double OvernightPackage::getExtraFeePerOz() const
{
    return extraFeePerOz;
}

double OvernightPackage::calculateCost() const
{
    return (getExtraFeePerOz() + Package::getCostPerOz()) * Package::getWeightOz();
}

void OvernightPackage::print() const
{
    Package::print();
    cout << "Extra fee per oz: $" << getExtraFeePerOz() << endl;
    cout << "-----------------------------" << endl;
    cout << "Total: $" << calculateCost() << endl;
}
