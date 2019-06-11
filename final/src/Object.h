#ifndef OBJECT_H
#define OBJECT_H

#include <iostream>
#include <vector>

#include <glad/glad.h>
#include <GLFW/glfw3.h>

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

#include "Shader.h"

using namespace std;

class Object {
public:
	Object(vector<float> _vertices, Shader *_shader);

	~Object();

	// ����Cube��Ⱦ
	void Render(int vertices_num);

	// ���Cube��Ⱦ
	void Render(vector<glm::vec3> positions);


private:
	unsigned int VAO, VBO;
	Shader *shader;
};

#endif // !CUBE_H
