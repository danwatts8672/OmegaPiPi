{

  //Chebychev function integration script.

//   TF1 *f1 = new TF1("f1","[0] +[1]*x +gaus(2)",0,5);
//   f1->SetParameters(6,-1,5,3,0.2);

// TF1 *f1 = Chebyshev2(double x, double c0, double c1, double c2) {

// c0 + c1*x + c2*(2.0*x*x - 1.0);

double_t param[2];
 param[0]=-0.379579;
 param[1]=-0.01508;
 param[2]= 0.01274;

 TF1 *f1 = Chebyshev2(2,*x,param[]);



 Double_t IntegralValue=f1->Integral(bin1, bin2);



}

 
