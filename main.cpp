#include <GLFW/glfw3.h>
#include <iostream>
GLFWwindow* init()
{
	if (!glfwInit()) { std::cout << "Can't initialize glfw!!" << std::endl; }

	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

	glfwWindowHint(GLFW_OPENGL_DEBUG_CONTEXT, true);  // DEBUG

	auto pWindow = glfwCreateWindow(800, 600, "Test window", nullptr, nullptr);
	if (!pWindow) {
		std::cout << "\nCan't create Window!! " << std::endl;
		glfwTerminate();
	}
	glfwMakeContextCurrent(pWindow);
	glfwSwapInterval(0);
	return pWindow;
}
int main()
{
	#ifdef _WIN32 
		std::cout<<"Running on Windos OS\n";
	#elif __unix__ 
		std::cout<<"Running on Unix OS\n";
	#elif __linux__
		std::cout<<"Running on linux OS\n";
	#elif __APPLE__
		std::cout<<"Running on Mac OS\n";
	#endif
	auto pWindow = init();
	std::cout << glGetString(GL_VERSION) << std::endl;

	glClearColor(1.0, 0.0, 1.0, 1.0);
	glClear(GL_COLOR_BUFFER_BIT);
	glfwSwapBuffers(pWindow);
	system("pause");
	int a;
	std::cin>>a;
	return 0;
}