
#include <iostream>
using namespace std;
#include "GenericRubiksCube.h"
#include "RubiksCube3dArray.cpp"
//#include "RubiksCubeBitboard.cpp"
#include "RubiksCube1dArray.cpp"
#include "DFSSolver.h"
//#include "DFSSolver.h"
#include "BFSSolver.h"
#include "IDDFS.h"
#include "IDAstarSolver.h"
#include "PatternDataBase/CornerPatternDataBase.h"
#include "PatternDataBase/CornerDBMaker.h"

int main() {
//  RubiksCube3dArray object3Darray;
//  object3Darray.print();

//    RubiksCube1dArray object1dArray;
//    RubiksCubeBitboard objectBitboard;
//     RubiksCube3dArray cube1;
//     RubiksCube3dArray cube2;
//     if(cube1==cube2)
//         cout<<"Cube are same"<<endl;
//     else
//         cout<<"Cube are not same"<<endl;
//     cube2.l();
//    if(cube1==cube2)
//        cout<<"Cube are same"<<endl;
//    else
//        cout<<"Cube are not same"<<endl;
//    RubiksCube1dArray cube1;
//     RubiksCube1dArray cube2;
//    if(cube1 == cube2) cout << "Is equal\n";
//    else cout << "Not Equal\n";
//
//    cube1.randomShuffleCube(1);
//
//    if(cube1 == cube2) cout << "Is equal\n";
//    else cout << "Not Equal\n";
//
//    cube2 = cube1;
//
//    if(cube1 == cube2) cout << "Is equal\n";
//    else cout << "Not Equal\n";
//    RubiksCube3dArray cube;
//    cube.print();
//
//    vector<GenericRubiksCube::MOVE> shuffle_moves = cube.randomShuffleCube(6);
//    for (auto move: shuffle_moves) cout << cube.getMove(move) << " ";
//    cout << "\n";
//    cube.print();
//
//    DFSSolver<RubiksCube3dArray, Hash3d> dfsSolver(cube, 8);
//    vector<GenericRubiksCube::MOVE> solve_moves = dfsSolver.solve();
//
//    for (auto move: solve_moves) cout << cube.getMove(move) << " ";
//    cout << "\n";
//    dfsSolver.rubiksCube.print();
//    RubiksCubeBitboard cube;
//    cube.print();
//
//    vector<GenericRubiksCube::MOVE> shuffle_moves = cube.randomShuffleCube(6);
//    for(auto move: shuffle_moves) cout << cube.getMove(move) << " ";
//    cout << "\n";
//    cube.print();
//
//    BFSSolver<RubiksCubeBitboard:: HashBitboard> bfsSolver(cube);
//    vector<GenericRubiksCube::MOVE> solve_moves = bfsSolver.solve();
//
//    for(auto move: solve_moves) cout << cube.getMove(move) << " ";
//    cout << "\n";
//    bfsSolver.rubiksCube.print();
//
    RubiksCube3dArray cube;
    cube.print();

    vector<GenericRubiksCube::MOVE> shuffle_moves = cube.randomShuffleCube(10);
    cout<<"This is shuffled Rubiks Cube"<<endl;
    for (auto move: shuffle_moves) cout << cube.getMove(move) << " ";
    cout << "\n";
    cube.print();
     cout<<"Now lets solve the cube by IDAstar algorithm"<<endl;
    IDAstarSolver<RubiksCube3dArray, Hash3d> IDAstarSolver(cube,"DataBase/CornerDepth5V1.txt");
    vector<GenericRubiksCube::MOVE> solve_moves = IDAstarSolver.solve();
    for (auto move: solve_moves) cout << cube.getMove(move) << " ";
    cout << "\n";
    IDAstarSolver.rubiksCube.print();



}
