
namespace SHAPES
{
	
	class shapes
	{
		protected:
			int shapecode;
			char shapetype;
			
		public:
			shapes(){}
			
			shapes(char shapetype)
			{
				this->shapetype = shapetype;
			}	 
			
			virtual void getInputs() = 0;
			virtual float getArea() = 0;
			virtual char* toString() = 0;
	};
	
	class circle : public shapes
	{
		private:
			float r;
			
		public:
			circle() : shapes('C')
			{
				r = 0;
			}
			
			circle(float r) : shapes('C')
			{
				this->r = r;
			}
			
			void getInputs();
			float getArea();
			char* toString();
	};
	
	class rectangle : public shapes
	{
		private:
			float width , length;
		
		public:
			rectangle() : shapes('R')
			{
				width = length = 0;
			}
			
			rectangle(float width , float length) : shapes('R')
			{
				this->width = width;
				this->length = length;
			}	 
			
			void getInputs();
			float getArea();
			char* toString();
	};
	

	class triangle : public shapes
	{
		private:
			float base , height;
			
		public:
			triangle() : shapes('T')
			{
				base = height = 0;
			}	 
			
			triangle(float base , float height) : shapes('T')
			{
				this->base = base;
				this->height = height;
			}
			
			void getInputs();
			float getArea() ;
			char* toString();
	};
	
}


