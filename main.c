#include <stdio.h>
#include <stdlib.h>

double DiscountPercentage = 0.1;
double OriginalPrice = 200000;

void TotalSalePrice (){

    double Salesprice= OriginalPrice-(OriginalPrice*DiscountPercentage);
    printf("The total sales price is %.2lf\n",Salesprice);
}

void SalaryAfterTax(double OriginalSalary,double TaxRate){
    double SalaryAfterTax = OriginalSalary -(OriginalSalary*TaxRate);
    printf("The Salary After Tax is %.2lf\n",SalaryAfterTax);
}

void GrossProfit(int salesrevenue,int COGS){
    int GrossProfit = salesrevenue -  COGS;
    printf("The gross profit is %d\n",GrossProfit);
}

void ROI(double investment,double profit){
    double  ROI= (investment/profit)*100;
    printf("The ROI is %.2lf\n",ROI);
}

double p = 50000000;

void MonthlyPayment(double n,double r ){
    double A = 1+r;
    double B = n;
    double MonthlyPayment = (((p*r) *A)/((pow(A,B)-1)));
    printf("The Monthly Payment is %.2lf\n",MonthlyPayment);
}

void SimpleInterest(int P,int T,double R ){
    double SimpleInterest = (P*R*T)/100;
    printf("The simple interest is %.2lf\n",SimpleInterest);
}

void Break_evenpoint(int Fixedcosts,int Priceperunit,int Variablecostsperunit){
    int Break_evenpoint = Fixedcosts/(Priceperunit-Variablecostsperunit);
    printf("The break even point is %d\n",Break_evenpoint);
}
void Flatinterest(int investmentamount,int time,double rate){
    double Flatinterest = investmentamount*time*rate;
    printf("The Flat interest is %.2lf\n ",Flatinterest);
}
void ProfitMargin ( int Profit,double  salesrevenue){
    double ProfitMargin = (Profit/salesrevenue)*100;
    printf("The profit margin is %.2lf\n",ProfitMargin);
}

void AnnualDepreciation(int Cost,int ResidualValue,int Usefullife ){
    int AnnualDepreciation = (Cost-ResidualValue) /(Usefullife);
    printf("The annaul depreciation is %d\n",AnnualDepreciation);
}
void  DiscountedPrice(int Price,double discountpercentage ){
    double DiscountedPrice = Price*discountpercentage;
    printf("The Discounted price is %lf\n",DiscountedPrice);

    return DiscountedPrice;
}

void Taxamount(){
    double price;
    printf("Enter the price\n");
    scanf("%lf",&price);

    double taxrate;
    printf("Enter the tax rate\n");
    scanf("%lf",&taxrate);
    
    double Taxamount = price*taxrate;
    printf("The Tax amount is %.2lf\n",Taxamount);
}

void EmployeeSalaryAfterBonus(){
    double basesalary;
    printf("Enter the base salary\n");
    scanf("%lf",&basesalary);

    double bonus_percentage;
    printf("Enter the Bonus percentage\n");
    scanf("%lf",&bonus_percentage);

    double EmployeeSalaryAfterBonus =basesalary*bonus_percentage;
    printf("The Employee salary after bonus is %.2lf\n",EmployeeSalaryAfterBonus);
}

void ProfitorLoss(){
    int CP;
    printf("Enter the Cost price\n");
    scanf("%d",&CP);
    int SP;
    printf("Enter the Selling price\n ");
    scanf("%d",&SP);

    if(SP>CP){
        printf("Profit\n");}else{
            printf("Loss\n");}

}

void DiscountedPriceifDiscountIsAbove20(){
    double originalprice;
    printf("Enter the original price\n");
    scanf("%lf",&originalprice);
    double discountpercentage;
    printf("Enter the discount percentage\n");
    scanf("%lf",&discountpercentage);
    double Discountedprice= originalprice*discountpercentage;

    if (discountpercentage >= 0.2){ printf("The discounted price is %.2lf\n ",Discountedprice); } else {}


}
void YearstoDoubleInvestment (){
    double Principal;
    printf("Enter the principal\n");
    scanf("%lf",&Principal);

    double rate;
    printf("Enter the rate\n ");
    scanf("%lf",&rate);

    double years = log(2) / log(1 + rate/100);
    printf("It will take %.0lf\n", years);


}

void TotalExpensesofCompany (){
    int items;
    printf("Enter the number of items\n");
    scanf("%d",&items);
    int Rprices;
    printf("Enter the respective Prices\n");
    scanf("%d",&Rprices);
    int TotalExpenses = Rprices*items;
    printf("Total Expenses is %d\n",TotalExpenses);
}

void TaxPercentage(){
    double Salary;
    printf("Enter the Salary\n");
    scanf("%lf",&Salary);
    double Taxrate;
    if(Salary<3000000){
    Taxrate = 0.1;
    printf("Tax rate is %.2lf\n",Taxrate);
    }else if (Salary>=3000000&&Salary<7000000){
        Taxrate = 0.15;
        printf("Tax rate is %.2lf\n",Taxrate);
        }else { Taxrate= 0.2;
        printf("Tax rate is %.2lf\n",Taxrate);
        }



}

void TotalOverDueFee(){
    int Daysoverdue;
    printf("Enter the days over due\n");
    scanf("%d",&Daysoverdue);
    int DailyoverDueFee;
    printf("Enter the Daily over due fee\n");
    scanf("%d",&DailyoverDueFee);
    int TotalOverDueFee = DailyoverDueFee*Daysoverdue;
    printf("The total overdue fee is %d\n",TotalOverDueFee);
}

void MaximumDiscountOffered(){
    double originalprice;
    printf("Enter the original price\n");
    scanf("%lf",&originalprice);
    double discountpercentage;
    printf("Enter the discount percentage\n");
    scanf("%lf",&discountpercentage);
    double MaxDiscount = originalprice*discountpercentage;
    printf("The max discount is %.2lf",MaxDiscount);
}

int main(){
    TotalSalePrice ();
    SalaryAfterTax(5000000,0.15);
    GrossProfit(15000000,9000000);
    ROI(10000000,2000000);
    MonthlyPayment(5,0.05);
    SimpleInterest(2000000,3,0.06);
    Break_evenpoint(10000000,100000,50000);
    Flatinterest(1000000,2,0.04);
    ProfitMargin(9000000,30000000);
    AnnualDepreciation(10000000,2000000,5);
    int DP;
    printf("Enter the Price\n");
    scanf("%d",&DP);
    double Dp;
    printf("Enter the Discounted Percentage\n");
    scanf("%lf",&Dp);
    DiscountedPrice(DP,Dp);
    Taxamount();
    EmployeeSalaryAfterBonus();
    ProfitorLoss();
    DiscountedPriceifDiscountIsAbove20();
    YearstoDoubleInvestment();
    TotalExpensesofCompany();
    TaxPercentage();
    TotalOverDueFee();
    MaximumDiscountOffered();

    return 0;
}
