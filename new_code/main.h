#include <iostream>
#include <random>
#include <time.h>
#include <iomanip>
#include <fstream>


//pattern_generation.cpp
#ifndef __PATTERN_GENERATION
#define __PATTERN_GENERATION

class PatternGen{
    private:
        int N; // Number of potts units
        int p; // Number of patterns
        int S; // Number of states
        double a;
        double beta;
        int N_fact;
        int Num_fact;
        double a_fact;
        double eps;
        double a_pf;
        double fact_eigen_slope;

        int * Patt; // Dynamic array of dimension p * N

        std::default_random_engine * generator;

    public:
        PatternGen(int N,
                   int p,
                   int S,
                   double a,
                   double beta,
                   int N_fact,
                   int Num_fact,
                   double a_fact,
                   double eps,
                   double a_pf,
                   double fact_eigen_slope
                   );
        ~PatternGen();

        void set_random_generator(std::default_random_engine & generator);
        void generate();
        void eval_stats();
        void save_pattern_to_file(std::string filename);

};

#endif