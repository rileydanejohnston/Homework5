// Riley Johnston
// CS137
// Homework 5

#ifndef TWODAYPACKAGE_H
#define TWODAYPACKAGE_H
#include "Package.h"

class TwoDayPackage : public Package {
    private:
        double flatFee;
    public:
        TwoDayPackage(const string& = "Tony Stark", const string& = "10880 Malibu Point", const string& = "Malibu", const string& = "CA", const string& = "90265", const string& = "Steven Strange", const string& = "177A Bleecker St", const string& = "New York City", const string& = "NY", const string& = "10012", double = 0.0, double = 0.0, double = 0.0);
        TwoDayPackage& setFlatFee(double);
        double getFlatFee() const;
        double calculateCost() const;
        void print() const;
};

#endif /* TwoDayPackage_hpp */
