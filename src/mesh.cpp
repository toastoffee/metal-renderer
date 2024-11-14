/**
  ******************************************************************************
  * @file           : mesh.cpp
  * @author         : toastoffee
  * @brief          : None
  * @attention      : None
  * @date           : 2024/11/14
  ******************************************************************************
  */



#include "mesh.hpp"

void Mesh::mergeMesh(Mesh &mesh) {
    size_t size = vertices.size();

    // merge vertices
    for (simd::float3 vertex : mesh.vertices) {
        vertices.push_back(vertex);
    }

    // merge indices
    for (simd::uint3 index : mesh.indices) {
        index += size;
        indices.push_back(index);
    }
}

