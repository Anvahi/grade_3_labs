using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks; 

namespace NET_lab4_classes  {
    /// <summary>
    /// Класс типы кредитов
    /// </summary>
    public class Types_of_Credits : IValidatable
    {
        /// <summary>
        /// Название кредита
        /// </summary>
        public string name { get; set; } = "";
        /// <summary>
        /// Условия получения кредита
        /// </summary>
        public string terms { get; set; } = "";
        /// <summary>
        /// Процентная ставка оп кредиту
        /// </summary>
        public double credit_rate { get; set; } = 0.00;
        /// <summary>
        /// Срок
        /// </summary>
        public DateTime Date { get; set; } = DateTime.Today;

        public bool IsValid
        {
            get
            {
                if (String.IsNullOrWhiteSpace(name))
                    return false;
                if (String.IsNullOrWhiteSpace(terms))
                    return false;
                if (credit_rate <= 0)
                    return false;
                if (Date < DateTime.Today)
                    return false;
                return true;
            }
        }
        public override string ToString()
        {
            return $"Название: { name }\r\nУсловия получения: { terms }\r\nПроцентная ставка: { credit_rate }\r\nСрок: { Date }\r\n" ;
        }
    }
    /// <summary>
    /// класс клиент
    /// </summary>
    public class Clients {
        /// <summary>
        /// Название
        /// </summary>
        public string Name { get; set; } = "";
        /// <summary>
        /// Вид собственности
        /// </summary>
        public string property_type { get; set; } = "";
        /// <summary>
        /// адрес
        /// </summary>
        public string adress { get; set; } = "";
        /// <summary>
        /// телефон
        /// </summary>
        public string phone { get; set; } = "";
        /// <summary>
        /// Контактное лицо
        /// </summary>
        public string contact_person { get; set; } = "";
    }
    /// <summary>
    /// класс клиент
    /// </summary>
    public class Credits
    {
        /// <summary>
        /// Название кредита
        /// </summary>
        public Types_of_Credits name  = new Types_of_Credits();
        /// <summary>
        /// Клиент
        /// </summary>
        public Clients client = new Clients();
        /// <summary>
        /// сумма
        /// </summary>
        public double sum { get; set; } = 0.0;
        /// <summary>
        /// дата выдачи
        /// </summary>
        public DateTime date { get; set; } = DateTime.Today;
    }
}
