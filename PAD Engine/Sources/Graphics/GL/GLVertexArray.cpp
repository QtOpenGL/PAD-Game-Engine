#include <GL/glew.h>

#include <Graphics/GL/GLVertexArray.h>

namespace pad {
namespace gfx {
namespace gl  {

void GLVertexArray::GenerateID()
{
	glGenVertexArrays(1, &m_id);
}

void GLVertexArray::Bind()
{
	glBindVertexArray(m_id);
}

} // namespace gl
} // namespace gfx
} // namespace pad