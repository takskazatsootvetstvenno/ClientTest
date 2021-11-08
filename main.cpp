#include <GLFW/glfw3.h>
#include <iostream>
void init()
{
	if (!glfwInit()) { std::cout << "Can't initialize glfw!!" << std::endl; }

	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 6);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

	glfwWindowHint(GLFW_OPENGL_DEBUG_CONTEXT, true);  // DEBUG

	auto m_pWindow = glfwCreateWindow(800, 600, "test conan", nullptr, nullptr);
	if (!m_pWindow) {
		std::cout << "\nCan't create Window!! " << std::endl;
		glfwTerminate();
	}
	glfwMakeContextCurrent(m_pWindow);
	glfwSwapInterval(0);
}
int main()
{
	init();
	std::cout << glGetString(GL_VERSION) << std::endl;

	glClearColor(1.0, 0.0, 1.0, 1.0);
	glClear(GL_COLOR_BUFFER_BIT);
	system("pause");
	return 0;
}