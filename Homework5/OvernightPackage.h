// Riley Johnston
// CS137
// Homework 5

#ifndef OVERNIGHTPACKAGE_H
#define OVERNIGHTPACKAGE_H

#include "Package.h"

class OvernightPackage : public Package {
    private:
        double extraFeePerOz;
    public:
        OvernightPackage(const string& = "Tony Stark", const string& = "10880 Malibu Point", const string& = "Malibu", const string& = "CA", const string& = "90265", const string& = "Steven Strange", const string& = "177A Bleecker St", const string& = "New York City", const string& = "NY", const string& = "10012", double = 0.0, double = 0.0, double = 0.0);
        OvernightPackage& setExtraFeePerOz(double);
        double getExtraFeePerOz() const;
        double calculateCost() const;
        void print() const;
};

#endif
