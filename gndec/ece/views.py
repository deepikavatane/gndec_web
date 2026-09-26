from django.shortcuts import render

# Create your views here.
def service(request):
    return render(request,'service.html')

def contacts(request):
    return render(request,'contacts.html')

def home(request):
    return render(request,'home.html')

def products(request):
    return render(request,'products.html')


