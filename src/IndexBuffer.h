#pragma once

namespace yon {

class IndexBuffer {
public:
	IndexBuffer(const unsigned int* data, unsigned int count);
	~IndexBuffer();

	void Bind() const;
	void Unbind() const;

	unsigned int GetCount() const { return m_count; }

private:
	unsigned int m_rendererID;
	unsigned int m_count;
};

}