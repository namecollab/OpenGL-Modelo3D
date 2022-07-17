#version 330 core
out vec4 FragColor;

uniform vec3 color;
in vec2 TexCoord;

// texture sampler
uniform sampler2D texture1;

void main()
{
	FragColor = texture(texture1, TexCoord) * vec4(color, 1.0);
}
