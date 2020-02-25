#ifndef CC_GFXGLES3_GLES3_BINDING_LAYOUT_H_
#define CC_GFXGLES3_GLES3_BINDING_LAYOUT_H_

NS_CC_BEGIN

class GLES3GPUBindingLayout;

class CC_GLES3_API GLES3BindingLayout : public GFXBindingLayout {
 public:
  GLES3BindingLayout(GFXDevice* device);
  ~GLES3BindingLayout();
  
 public:
  bool initialize(const GFXBindingLayoutInfo& info);
  void destroy();
  void update();
  
  CC_INLINE GLES3GPUBindingLayout* gpuBindingLayout() const { return _gpuBindingLayout; }
  
 private:
  GLES3GPUBindingLayout* _gpuBindingLayout = nullptr;
};

NS_CC_END

#endif