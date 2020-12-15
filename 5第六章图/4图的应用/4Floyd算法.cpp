/**
 * @file 4Floyd算法.cpp
 * @author ZhangChunXian (1836891291@qq.com)
 * @brief 
 * @version 0.1
 * @date 2020-12-15
 * 
 * 
 */

// Floyd算法核心
/** 准备工作, 根据图的信息初始化矩阵A和path(如上图)
 * for(int k = 0; k < n; k++) {          //考虑以Vk作为中转点
 *      for(int i = 0; i < n; i++) {     // 遍历整个矩阵, i为行号, j为列号
 *          for(int j = 0; j < n; j++) {
 *              if(A[i][j] > A[i][k] + A[k][j]) {   // 以Vk为中转点的路径更短
 *                  A[i][j] = A[i][k] + A[k][j];    // 更新最短路径长度
 *                  path[i][j] = k;                 // 中转点
 *              }
 *          }
 *      }
 * }
 * 
 */