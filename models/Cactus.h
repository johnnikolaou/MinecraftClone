#ifndef CACTUS_H
#define CACTUS_H

#include <vector>
#include <glm/common.hpp>
#include <GL/glew.h>
#include "Model.h"

using namespace std;
using namespace glm;

class Cactus : public Model {
public:
	bool is_transparent() const override { return is_transparent_; }
	bool is_cube() const override { return is_cube_; }
	vector<vector<vec3>> vertex_positions() const override { return vertex_positions_; }
	vector<vector<GLfloat>> tex_coords() const override { return tex_coords_; }
	vector<vector<vec3>> normal_positions() const override { return normal_positions_; }
	vector<vector<GLfloat>> shading_values() const override { return shading_values_; }
private:
	bool is_transparent_ = true;
	bool is_cube_ = false;

	vector<vector<vec3>> vertex_positions_ = {
		{vec3( 0.4375,  0.5000,  0.5000), vec3( 0.4375, -0.5000,  0.5000), vec3( 0.4375, -0.5000, -0.5000), vec3( 0.4375,  0.5000, -0.5000)},
		{vec3(-0.4375,  0.5000, -0.5000), vec3(-0.4375, -0.5000, -0.5000), vec3(-0.4375, -0.5000,  0.5000), vec3(-0.4375,  0.5000,  0.5000)},
		{vec3( 0.5000,  0.5000,  0.5000), vec3( 0.5000,  0.5000, -0.5000), vec3(-0.5000,  0.5000, -0.5000), vec3(-0.5000,  0.5000,  0.5000)},
		{vec3(-0.5000, -0.5000,  0.5000), vec3(-0.5000, -0.5000, -0.5000), vec3( 0.5000, -0.5000, -0.5000), vec3( 0.5000, -0.5000,  0.5000)},
		{vec3(-0.5000,  0.5000,  0.4375), vec3(-0.5000, -0.5000,  0.4375), vec3( 0.5000, -0.5000,  0.4375), vec3( 0.5000,  0.5000,  0.4375)},
		{vec3( 0.5000,  0.5000, -0.4375), vec3( 0.5000, -0.5000, -0.4375), vec3(-0.5000, -0.5000, -0.4375), vec3(-0.5000,  0.5000, -0.4375)}
	};

	vector<vector<GLfloat>> tex_coords_ = {
		{0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 1.0, 1.0, 0.0, 1.0, 0.0, 0.0},
		{0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 1.0, 1.0, 0.0, 1.0, 0.0, 0.0},
		{0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 1.0, 1.0, 0.0, 1.0, 0.0, 0.0},
		{0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 1.0, 1.0, 0.0, 1.0, 0.0, 0.0},
		{0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 1.0, 1.0, 0.0, 1.0, 0.0, 0.0},
		{0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 1.0, 1.0, 0.0, 1.0, 0.0, 0.0}
	};

	vector<vector<vec3>> normal_positions_ = {
		{vec3(+1.0f, +0.0f, +0.0f), vec3(+1.0f, +0.0f, +0.0f), vec3(+1.0f, +0.0f, +0.0f), vec3(+1.0f, +0.0f, +0.0f)}, // right
		{vec3(-1.0f, +0.0f, +0.0f), vec3(-1.0f, +0.0f, +0.0f), vec3(-1.0f, +0.0f, +0.0f), vec3(-1.0f, +0.0f, +0.0f)}, // left
		{vec3(+0.0f, +1.0f, +0.0f), vec3(+0.0f, +1.0f, +0.0f), vec3(+0.0f, +1.0f, +0.0f), vec3(+0.0f, +1.0f, +0.0f)}, // top
		{vec3(+0.0f, -1.0f, +0.0f), vec3(+0.0f, -1.0f, +0.0f), vec3(+0.0f, -1.0f, +0.0f), vec3(+0.0f, -1.0f, +0.0f)}, // bottom
		{vec3(+0.0f, +0.0f, +1.0f), vec3(+0.0f, +0.0f, +1.0f), vec3(+0.0f, +0.0f, +1.0f), vec3(+0.0f, +0.0f, +1.0f)}, // front
		{vec3(+0.0f, +0.0f, -1.0f), vec3(+0.0f, +0.0f, -1.0f), vec3(+0.0f, +0.0f, -1.0f), vec3(+0.0f, +0.0f, -1.0f)}  // back
	};

	vector<vector<GLfloat>> shading_values_ = {
		{0.6, 0.6, 0.6, 0.6},
		{0.6, 0.6, 0.6, 0.6},
		{1.0, 1.0, 1.0, 1.0},
		{0.4, 0.4, 0.4, 0.4},
		{0.8, 0.8, 0.8, 0.8},
		{0.8, 0.8, 0.8, 0.8}
	};
};

#endif /* CACTUS_H */