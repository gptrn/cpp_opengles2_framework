// OpenGLES2.0Framework.cpp : Defines the entry point for the console application.
#include "stdafx.h"

#include <conio.h>

#include "Globals.h"
#include "Vertex.h"
#include "Shaders.h"

#include "../Utilities/utilities.h"

Shaders		myShaders;
Vertex		verticesData[3];

int Init( ESContext *esContext )
{
	// Your initialization function here...

	glClearColor( 0.0f, 0.0f, 0.0f, 0.0f );

	// Triangle vertices data
	verticesData[0].position = Vector3(  0.0,  0.5,  0.0 );
	verticesData[1].position = Vector3( -0.5, -0.5,  0.0 );
	verticesData[2].position = Vector3(  0.5, -0.5,  0.0 );

	// The creation of shaders and program 
	myShaders.Init( "../Resources/Shaders/TriangleShaderVS.vs", "../Resources/Shaders/TriangleShaderFS.fs" );
	return 0;
}

void Draw( ESContext *esContext )
{
	// Your draw function here...

	glClear( GL_COLOR_BUFFER_BIT );

	glUseProgram( myShaders.GetProgram() );

	if( myShaders.GetAttributes().position != -1 )
	{
		glEnableVertexAttribArray( myShaders.GetAttributes().position );
		glVertexAttribPointer( myShaders.GetAttributes().position, 3, GL_FLOAT, GL_FALSE, sizeof( Vertex ), &verticesData );
	}

	glDrawArrays( GL_TRIANGLES, 0, 3 );

	eglSwapBuffers( esContext->eglDisplay, esContext->eglSurface );
}

void Update( ESContext *esContext, float deltaTime )
{
	// Your update functionality here...
	// Don't forget the deltaTime var! You'll need it.
}

void Key( ESContext *esContext, unsigned char key, bool isPressed )
{
	// Your keyboard key functionality here
	// This function will be triggered when a key is pressed OR released
	// Test the key in "key" variable
	// isPressed == false is the "key" being released
}

void CleanUp()
{
	// Cleaning up the buffers example:
	//glDeleteBuffers( 1, &vboId );
	//glDeleteBuffers( 1, &iboId );
}

int _tmain( int argc, _TCHAR* argv[] )
{
	// Your entry point is here...

	ESContext esContext;

	esInitContext( &esContext );

	esCreateWindow( &esContext, "Hello OpenGL ES 2.0", 
		Globals::screenWidth, Globals::screenHeight, 
		ES_WINDOW_RGB | ES_WINDOW_DEPTH );

	if (Init(&esContext) != 0)
	{
		return 0;
	}

	// Registering the Draw, Update, and Key functions
	esRegisterDrawFunc( &esContext, Draw );
	esRegisterUpdateFunc( &esContext, Update );
	esRegisterKeyFunc( &esContext, Key );

	esMainLoop( &esContext );

	// Releasing OpenGL ES 2.0 resources
	CleanUp();

	// Identifying & dumping memory leaks to the windows
	MemoryDump();

	// User key confirmation
	printf( "Press any key...\n" );
	_getch();

	return 0;
}

