/**
  ******************************************************************************
  * @file           : renderer.hpp
  * @author         : toastoffee
  * @brief          : None
  * @attention      : None
  * @date           : 2024/10/15
  ******************************************************************************
  */



#ifndef METAL_RENDERER_RENDERER_HPP
#define METAL_RENDERER_RENDERER_HPP

#include <Metal/Metal.hpp>
#include <MetalKit/MetalKit.hpp>

class Renderer {
private:
    MTL::Device* _device;
    MTL::CommandQueue* _viewCommandQueue;
    MTL::RenderPipelineState _viewPSO;
    MTL::Buffer* _viewVertexDataBuffer;
    MTL::Buffer* _viewIndexBuffer;

public:
    explicit Renderer( MTL::Device* device );

    ~Renderer();

    void Draw(MTK::View* view);

    void BuildViewShaders();
};


#endif //METAL_RENDERER_RENDERER_HPP
