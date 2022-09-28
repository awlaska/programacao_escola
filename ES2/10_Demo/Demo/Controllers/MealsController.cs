using System.Linq;
using Demo.Context;
using Demo.Models;
using Microsoft.AspNetCore.Mvc;
using Microsoft.EntityFrameworkCore;

namespace Demo.Controllers
{
    public class MealsController : Controller
    {
        // GET
        public IActionResult Index()
        {
            var db = new MealsDbContext();
            var meals = db.Meals.Include(m => m.User);
            return View(meals.Select(m => new MealViewModel(m)).ToList());
        }
    }
}