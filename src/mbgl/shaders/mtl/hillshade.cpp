#include <mbgl/shaders/mtl/hillshade.hpp>

namespace mbgl {
namespace shaders {

const std::array<AttributeInfo, 2> ShaderSource<BuiltIn::HillshadeShader, gfx::Backend::Type::Metal>::attributes = {
    AttributeInfo{0, gfx::AttributeDataType::Short2, "a_pos"},
    AttributeInfo{1, gfx::AttributeDataType::Short2, "a_texture_pos"},
};
const std::array<UniformBlockInfo, 2> ShaderSource<BuiltIn::HillshadeShader, gfx::Backend::Type::Metal>::uniforms = {
    UniformBlockInfo{2, true, true, sizeof(HillshadeDrawableUBO), idHillshadeDrawableUBO},
    UniformBlockInfo{3, false, true, sizeof(HillshadeEvaluatedPropsUBO), idHillshadeEvaluatedPropsUBO},
};
const std::array<TextureInfo, 1> ShaderSource<BuiltIn::HillshadeShader, gfx::Backend::Type::Metal>::textures = {
    TextureInfo{0, "u_image"},
};

} // namespace shaders
} // namespace mbgl
