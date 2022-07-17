#ifndef CUBE_HPP
#define CUBE_HPP

#include <glad/glad.h>
#include <GLFW/glfw3.h>
#define STB_IMAGE_IMPLEMENTATION
#include "stb_image.h"

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

#include <iostream>

using namespace std;


class Cube
{
	public:
		glm::vec3 Position;
		//Cube();
		// constructor with vectors
		Cube(glm::vec3 position = glm::vec3(0.0f, 0.0f, 0.0f))
		{
			Position = position;
		}
		~Cube();
};

#endif