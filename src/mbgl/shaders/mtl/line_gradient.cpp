#include <mbgl/shaders/mtl/line_gradient.hpp>

namespace mbgl {
namespace shaders {

const std::array<AttributeInfo, 7> ShaderSource<BuiltIn::LineGradientShader, gfx::Backend::Type::Metal>::attributes = {
    AttributeInfo{0, gfx::AttributeDataType::Short2, "a_pos_normal"},
    AttributeInfo{1, gfx::AttributeDataType::UByte4, "a_data"},
    AttributeInfo{2, gfx::AttributeDataType::Float2, "a_blur"},
    AttributeInfo{3, gfx::AttributeDataType::Float2, "a_opacity"},
    AttributeInfo{4, gfx::AttributeDataType::Float2, "a_gapwidth"},
    AttributeInfo{5, gfx::AttributeDataType::Float2, "a_offset"},
    AttributeInfo{6, gfx::AttributeDataType::Float2, "a_width"},
};
const std::array<UniformBlockInfo, 4> ShaderSource<BuiltIn::LineGradientShader, gfx::Backend::Type::Metal>::uniforms = {
    UniformBlockInfo{7, true, false, sizeof(LineDynamicUBO), idLineGradientDynamicUBO},
    UniformBlockInfo{8, true, true, sizeof(LineGradientUBO), idLineGradientUBO},
    UniformBlockInfo{9, true, true, sizeof(LineGradientPropertiesUBO), idLineGradientPropertiesUBO},
    UniformBlockInfo{10, true, false, sizeof(LineGradientInterpolationUBO), idLineGradientInterpolationUBO},
};
const std::array<TextureInfo, 1> ShaderSource<BuiltIn::LineGradientShader, gfx::Backend::Type::Metal>::textures = {
    TextureInfo{0, "u_image"},
};

} // namespace shaders
} // namespace mbgl
