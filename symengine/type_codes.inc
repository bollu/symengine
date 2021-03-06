SYMENGINE_ENUM(INTEGER, Integer)
SYMENGINE_ENUM(RATIONAL, Rational)
SYMENGINE_ENUM(COMPLEX, Complex)
SYMENGINE_ENUM(COMPLEX_DOUBLE, ComplexDouble)
#if defined(HAVE_SYMENGINE_MPFR) || defined(SYMENGINE_INCLUDE_ALL)
SYMENGINE_ENUM(REAL_MPFR, RealMPFR)
#endif
#if defined(HAVE_SYMENGINE_MPC) || defined(SYMENGINE_INCLUDE_ALL)
SYMENGINE_ENUM(COMPLEX_MPC, ComplexMPC)
#endif
SYMENGINE_ENUM(REAL_DOUBLE, RealDouble)
#if defined(HAVE_SYMENGINE_PIRANHA) || defined(SYMENGINE_INCLUDE_ALL)
SYMENGINE_ENUM(URATPSERIESPIRANHA, URatPSeriesPiranha)
SYMENGINE_ENUM(UPSERIESPIRANHA, UPSeriesPiranha)
#endif
#if defined(HAVE_SYMENGINE_FLINT) || defined(SYMENGINE_INCLUDE_ALL)
SYMENGINE_ENUM(URATPSERIESFLINT, URatPSeriesFlint)
#endif
SYMENGINE_ENUM(NUMBER_WRAPPER, NumberWrapper)
// 'NUMBER_WRAPPER' returns the number of subclasses of Number.
// All subclasses of Number must be added before it. Do not assign
// non subclasses of Number before it.
SYMENGINE_ENUM(SYMBOL, Symbol)
SYMENGINE_ENUM(MUL, Mul)
SYMENGINE_ENUM(ADD, Add)
SYMENGINE_ENUM(POW, Pow)
SYMENGINE_ENUM(UNIVARIATEPOLYNOMIAL, UnivariatePolynomial)
SYMENGINE_ENUM(UNIVARIATESERIES, UnivariateSeries)
SYMENGINE_ENUM(LOG, Log)
SYMENGINE_ENUM(CONSTANT, Constant)
SYMENGINE_ENUM(SIN, Sin)
SYMENGINE_ENUM(COS, Cos)
SYMENGINE_ENUM(TAN, Tan)
SYMENGINE_ENUM(COT, Cot)
SYMENGINE_ENUM(CSC, Csc)
SYMENGINE_ENUM(SEC, Sec)
SYMENGINE_ENUM(ASIN, ASin)
SYMENGINE_ENUM(ACOS, ACos)
SYMENGINE_ENUM(ASEC, ASec)
SYMENGINE_ENUM(ACSC, ACsc)
SYMENGINE_ENUM(ATAN, ATan)
SYMENGINE_ENUM(ACOT, ACot)
SYMENGINE_ENUM(ATAN2, ATan2)
SYMENGINE_ENUM(SINH, Sinh)
SYMENGINE_ENUM(CSCH, Csch)
SYMENGINE_ENUM(COSH, Cosh)
SYMENGINE_ENUM(SECH, Sech)
SYMENGINE_ENUM(TANH, Tanh)
SYMENGINE_ENUM(COTH, Coth)
SYMENGINE_ENUM(ASINH, ASinh)
SYMENGINE_ENUM(ACSCH, ACsch)
SYMENGINE_ENUM(ACOSH, ACosh)
SYMENGINE_ENUM(ATANH, ATanh)
SYMENGINE_ENUM(ACOTH, ACoth)
SYMENGINE_ENUM(ASECH, ASech)
SYMENGINE_ENUM(LAMBERTW, LambertW)
SYMENGINE_ENUM(ZETA, Zeta)
SYMENGINE_ENUM(DIRICHLET_ETA, Dirichlet_eta)
SYMENGINE_ENUM(KRONECKERDELTA, KroneckerDelta)
SYMENGINE_ENUM(LEVICIVITA, LeviCivita)
SYMENGINE_ENUM(GAMMA, Gamma)
SYMENGINE_ENUM(POLYGAMMA, PolyGamma)
SYMENGINE_ENUM(LOWERGAMMA, LowerGamma)
SYMENGINE_ENUM(UPPERGAMMA, UpperGamma)
SYMENGINE_ENUM(BETA, Beta)
SYMENGINE_ENUM(FUNCTIONSYMBOL, FunctionSymbol)
SYMENGINE_ENUM(FUNCTIONWRAPPER, FunctionWrapper)
SYMENGINE_ENUM(DERIVATIVE, Derivative)
SYMENGINE_ENUM(SUBS, Subs)
SYMENGINE_ENUM(ABS, Abs)
SYMENGINE_ENUM(MAX, Max)
SYMENGINE_ENUM(MIN, Min)
