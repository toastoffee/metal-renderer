/**
  ******************************************************************************
  * @file           : ShaderTool.hpp
  * @author         : toastoffee
  * @brief          : None
  * @attention      : None
  * @date           : 2024/10/16
  ******************************************************************************
  */



#ifndef METAL_RENDERER_SHADER_TOOL_HPP
#define METAL_RENDERER_SHADER_TOOL_HPP

#include <Metal/Metal.hpp>
#include <MetalKit/MetalKit.hpp>

class ShaderTool {
private:
    static std::string readSource(const char *filePath);

public:
    static MTL::Library* createLibrary(const char* shaderFilePath, MTL::Device* device);
};


#endif //METAL_RENDERER_SHADER_TOOL_HPP
