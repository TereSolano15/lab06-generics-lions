//
// Created by Fabio Villalobos on 17/9/2020.
//
#include "University.h"
#include "Person.h"
#include "Professor.h"
#include "Administrative.h"
#include "gtest/gtest.h"

TEST(UniversityTestSuite, VerifyUniversityProcess){

    Professor* p1 = new Professor("Antonio", "Banderas", 1, 2, 3);
    University<Professor>(professorlist);
    professorlist.agregar(p1);
    EXPECT_EQ(professorlist.agregar(p1),"Agregado");

}
