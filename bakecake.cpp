// Getting better and better!

#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

int language;
bool ccc = true;
bool aaa = true;

int cakechoice;

void english() {
    aaa = true;
    while (aaa == true) {
        cout << "English! This language is not google translated. \n";
    
        cout << "Select what cake you want!\n1: Vanilla Cake\n2: Chocolate cake\nChoose: ";
        cin >> cakechoice;
    
        if (cakechoice == 1) {
            aaa = false;
            cout << "\n\nVanilla";
        } else if (cakechoice == 2) {
            aaa = false;
            cout << "\n\nChocolate";
        } else {
            aaa = true;
            cout << "Error detected.";
            cout << "ERROR: NOT ONE OF THE CHOICES (1/2/3). PLEASE TRY AGAIN...\nError code: 101.\n\n\n\n";
        }
    }
    
    if (cakechoice == 1) {
        cout << "Required materials/ingredients\n1: cooking spray\n2: 2 ⅔ cups all-purpose flour, or more as needed\n3: 1 cup white sugar\n4: 1 tablespoon baking powder\n5: 1 tablespoon vanilla extract\n6: 2 pinches salt\n7: 3 eggs\n8: ¾ cup milk\n9: ¾ cup vegetable oil\n\nClick enter when you get all ingredients\n";
        cin.get();
        std::this_thread::sleep_for(std::chrono::seconds(2));
        
        
        cout << "Step 1: Preheat the oven to 350 degrees F (175 degrees C). Grease a 9-inch cake tin with cooking spray and line with parchment paper.\n";
        cin.get();
        std::this_thread::sleep_for(std::chrono::seconds(2));
        cout << "Step 2: Mix flour, sugar, baking powder, vanilla extract, and salt together in a large bowl. Add eggs, milk, and vegetable oil; mix by hand or beat with an electric mixer on low speed until smooth. Add more flour if batter is too runny. Pour into the prepared pan.\n";
        cin.get();std::this_thread::sleep_for(std::chrono::seconds(2));
        cout << "Step 3: Bake in the preheated oven until a toothpick inserted into the center of the cake comes out clean, about 35-37 minutes. Cool on a wire rack for 5 minutes. Run a table knife around the edges to loosen. Invert cake carefully onto a cooling rack. Let cool completely.\n\nClick enter when you have made the cake!";
        
        cin.get(); cout << "Congrats!";std::this_thread::sleep_for(std::chrono::seconds(2));
        
        
    } else if (cakechoice == 2) {
        cout << "Required materials/ingredients:\n";
        cout << "1: Cooking spray\n";
        cout << "2: 1 ¾ cups all-purpose flour\n";
        cout << "3: 1 ½ cups granulated sugar\n";
        cout << "4: ¾ cup unsweetened cocoa powder\n";
        cout << "5: 1 ½ teaspoons baking powder\n";
        cout << "6: 1 ½ teaspoons baking soda\n";
        cout << "7: 1 teaspoon salt\n";
        cout << "8: 2 large eggs\n";
        cout << "9: 1 cup milk\n";
        cout << "10: ½ cup vegetable oil\n";
        cout << "11: 2 teaspoons vanilla extract\n";
        cout << "12: 1 cup boiling water\n\n";
        cout << "Click Enter when you have gathered all the ingredients...\n";
        cin.get();std::this_thread::sleep_for(std::chrono::seconds(2));

        cout << "Step 1: Preheat the oven to 350 degrees F (175 degrees C). Grease and flour two 9-inch round cake pans or line with parchment paper.\n";
        cout << "Click Enter when you're ready for the next step...\n";
        cin.get();std::this_thread::sleep_for(std::chrono::seconds(2));

        cout << "Step 2: In a large bowl, combine flour, sugar, cocoa powder, baking powder, baking soda, and salt. Mix well.\n";
        cout << "Click Enter when you're ready for the next step...\n";
        cin.get();std::this_thread::sleep_for(std::chrono::seconds(2));

        cout << "Step 3: Add eggs, milk, vegetable oil, and vanilla extract. Beat on medium speed until well combined. Stir in boiling water (batter will be thin).\n";
        cout << "Click Enter when you're ready for the next step...\n";
        cin.get();std::this_thread::sleep_for(std::chrono::seconds(2));

        cout << "Step 4: Pour batter evenly into the prepared pans. Bake in the preheated oven for 30-35 minutes, or until a toothpick inserted into the center comes out clean.\n";
        cout << "Click Enter when you're ready for the next step...\n";
        cin.get();std::this_thread::sleep_for(std::chrono::seconds(2));

        cout << "Step 5: Cool cakes in pans for 10 minutes, then remove from pans and cool completely on a wire rack.\n";
        cout << "Click Enter when you have finished baking and cooling the cake...\n";
        cin.get();std::this_thread::sleep_for(std::chrono::seconds(2));

        cout << "Congrats! Your chocolate cake is ready to be enjoyed!\n";
    }
}

void arabic() {
    aaa = true;
    while (aaa == true) {
        cout << "العربية! هذه اللغة مترجمة.\n";
    
        cout << "اختر نوع الكعكة التي تريدها!\n1: كعكة الفانيليا\n2: كعكة الشوكولاتة\nاختر: ";
        cin >> cakechoice;
    
        if (cakechoice == 1) {
            aaa = false;
            cout << "\n\nفانيليا";
        } else if (cakechoice == 2) {
            aaa = false;
            cout << "\n\nشوكولاتة";
        } else {
            aaa = true;
            cout << "تم اكتشاف خطأ.";
            cout << "خطأ: ليس من الخيارات (1/2/3). يرجى المحاولة مرة أخرى...\nرمز الخطأ: 101.\n\n\n\n";
        }
    }

    if (cakechoice == 1) {
        cout << "المكونات المطلوبة:\n";
        cout << "1: رذاذ الطهي\n";
        cout << "2: 2 ⅔ كوب دقيق لجميع الأغراض، أو أكثر حسب الحاجة\n";
        cout << "3: 1 كوب سكر أبيض\n";
        cout << "4: 1 ملعقة كبيرة من مسحوق الخبز\n";
        cout << "5: 1 ملعقة كبيرة من مستخلص الفانيليا\n";
        cout << "6: رشة ملح\n";
        cout << "7: 3 بيضات\n";
        cout << "8: ¾ كوب حليب\n";
        cout << "9: ¾ كوب زيت نباتي\n\n";
        cout << "اضغط على Enter عندما تجمع جميع المكونات...\n";
        cin.get();std::this_thread::sleep_for(std::chrono::seconds(2));
        
        cout << "الخطوة 1: سخن الفرن على 350 درجة فهرنهايت (175 درجة مئوية). دهن قالب كيك قطره 9 بوصات برذاذ الطهي وغطه بورق الزبدة.\n";
        cout << "اضغط على Enter عندما تكون جاهزًا للخطوة التالية...\n";
        cin.get();std::this_thread::sleep_for(std::chrono::seconds(2));

        cout << "الخطوة 2: اخلط الدقيق والسكر ومسحوق الخبز ومستخلص الفانيليا والملح معًا في وعاء كبير. أضف البيض والحليب والزيت النباتي؛ اخلط باليد أو استخدم الخلاط الكهربائي على سرعة منخفضة حتى يصبح المزيج ناعمًا. أضف المزيد من الدقيق إذا كان الخليط رقيقًا جدًا. اسكب الخليط في القالب المحضر.\n";
        cout << "اضغط على Enter عندما تكون جاهزًا للخطوة التالية...\n";
        cin.get();std::this_thread::sleep_for(std::chrono::seconds(2));

        cout << "الخطوة 3: اخبز في الفرن المسخن مسبقًا حتى يخرج عود الأسنان الذي يتم إدخاله في وسط الكيك نظيفًا، حوالي 35-37 دقيقة. اترك الكيك ليبرد على رف سلكي لمدة 5 دقائق. استخدم سكينًا لفصل الأطراف من القالب. اقلب الكيك بحذر على رف التبريد. اتركه يبرد تمامًا.\n\nاضغط على Enter عندما تكون قد أتممت إعداد الكيك!\n";
        cin.get();std::this_thread::sleep_for(std::chrono::seconds(2));

        cout << "مبروك!";
    } else if (cakechoice == 2) {
        cout << "المكونات المطلوبة:\n";
        cout << "1: رذاذ الطهي\n";
        cout << "2: 1 ¾ كوب دقيق لجميع الأغراض\n";
        cout << "3: 1 ½ كوب سكر حبيبات\n";
        cout << "4: ¾ كوب مسحوق كاكاو غير محلى\n";
        cout << "5: 1 ½ ملعقة صغيرة مسحوق الخبز\n";
        cout << "6: 1 ½ ملعقة صغيرة صودا الخبز\n";
        cout << "7: 1 ملعقة صغيرة ملح\n";
        cout << "8: 2 بيض كبير\n";
        cout << "9: 1 كوب حليب\n";
        cout << "10: ½ كوب زيت نباتي\n";
        cout << "11: 2 ملعقة صغيرة مستخلص الفانيليا\n";
        cout << "12: 1 كوب ماء مغلي\n\n";
        cout << "اضغط على Enter عندما تجمع جميع المكونات...\n";
        cin.get();std::this_thread::sleep_for(std::chrono::seconds(2));

        cout << "الخطوة 1: سخن الفرن على 350 درجة فهرنهايت (175 درجة مئوية). دهن وقم بدقيق قالبين دائريين قياس 9 بوصات أو غلفهما بورق الزبدة.\n";
        cout << "اضغط على Enter عندما تكون جاهزًا للخطوة التالية...\n";
        cin.get();std::this_thread::sleep_for(std::chrono::seconds(2));

        cout << "الخطوة 2: في وعاء كبير، اخلط الدقيق والسكر ومسحوق الكاكاو ومسحوق الخبز وصودا الخبز والملح. اخلط جيدًا.\n";
        cout << "اضغط على Enter عندما تكون جاهزًا للخطوة التالية...\n";
        cin.get();std::this_thread::sleep_for(std::chrono::seconds(2));

        cout << "الخطوة 3: أضف البيض والحليب والزيت النباتي ومستخلص الفانيليا. اخفق على سرعة متوسطة حتى يمتزج جيدًا. أضف الماء المغلي (سيكون الخليط رقيقًا).\n";
        cout << "اضغط على Enter عندما تكون جاهزًا للخطوة التالية...\n";
        cin.get();std::this_thread::sleep_for(std::chrono::seconds(2));

        cout << "الخطوة 4: اسكب الخليط بالتساوي في القوالب المحضرة. اخبز في الفرن المسخن مسبقًا لمدة 30-35 دقيقة، أو حتى يخرج عود الأسنان الذي يتم إدخاله في الوسط نظيفًا.\n";
        cout << "اضغط على Enter عندما تكون جاهزًا للخطوة التالية...\n";
        cin.get();std::this_thread::sleep_for(std::chrono::seconds(2));

        cout << "الخطوة 5: اترك الكيك ليبرد في القوالب لمدة 10 دقائق، ثم أزلها من القوالب واتركها تبرد تمامًا على رف سلكي.\n";
        cout << "اضغط على Enter عندما تنتهي من خبز وتبريد الكيك...\n";
        cin.get();std::this_thread::sleep_for(std::chrono::seconds(2));

        cout << "مبروك! كعكة الشوكولاتة جاهزة للاستمتاع بها!\n";
    }
}

void chinese() {
    aaa = true;
    while (aaa == true) {
        cout << "中文！这个语言已经被翻译。\n";
    
        cout << "选择你想要的蛋糕类型！\n1: 香草蛋糕\n2: 巧克力蛋糕\n选择: ";
        cin >> cakechoice;
    
        if (cakechoice == 1) {
            aaa = false;
            cout << "\n\n香草";
        } else if (cakechoice == 2) {
            aaa = false;
            cout << "\n\n巧克力";
        } else {
            aaa = true;
            cout << "检测到错误。";
            cout << "错误: 不是选项之一 (1/2/3)。请再试一次...\n错误代码: 101。\n\n\n\n";
        }
    }

    if (cakechoice == 1) {
        cout << "所需材料：\n";
        cout << "1: 烹饪喷雾\n";
        cout << "2: 2 ⅔ 杯通用面粉，或根据需要更多\n";
        cout << "3: 1 杯白糖\n";
        cout << "4: 1 汤匙发酵粉\n";
        cout << "5: 1 汤匙香草精\n";
        cout << "6: 2 小撮盐\n";
        cout << "7: 3 个鸡蛋\n";
        cout << "8: ¾ 杯牛奶\n";
        cout << "9: ¾ 杯植物油\n\n";
        cout << "当你准备好所有材料时，请按 Enter 键...\n";
        cin.get();std::this_thread::sleep_for(std::chrono::seconds(2));
        
        cout << "步骤 1: 预热烤箱至 350 华氏度（175 摄氏度）。用烹饪喷雾喷洒一个 9 英寸的蛋糕模具，并用烘焙纸铺底。\n";
        cout << "按 Enter 键准备下一步...\n";
        cin.get();std::this_thread::sleep_for(std::chrono::seconds(2));

        cout << "步骤 2: 在一个大碗中，将面粉、糖、发酵粉、香草精和盐混合。加入鸡蛋、牛奶和植物油；用手混合或用电动搅拌器低速搅拌至光滑。如果面糊太稀，添加更多面粉。将面糊倒入准备好的蛋糕模具中。\n";
        cout << "按 Enter 键准备下一步...\n";
        cin.get();std::this_thread::sleep_for(std::chrono::seconds(2));

        cout << "步骤 3: 放入预热的烤箱中烘烤，直到插入蛋糕中心的牙签干净地拔出，约 35-37 分钟。将蛋糕在烤网上冷却 5 分钟。用刀沿边缘轻轻松动蛋糕。小心地将蛋糕倒扣到冷却架上。完全冷却后再切片。\n\n当你完成蛋糕制作时，请按 Enter 键！\n";
        cin.get();std::this_thread::sleep_for(std::chrono::seconds(2));

        cout << "恭喜你！";
    } else if (cakechoice == 2) {
        cout << "所需材料：\n";
        cout << "1: 烹饪喷雾\n";
        cout << "2: 1 ¾ 杯通用面粉\n";
        cout << "3: 1 ½ 杯白糖\n";
        cout << "4: ¾ 杯无糖可可粉\n";
        cout << "5: 1 ½ 茶匙发酵粉\n";
        cout << "6: 1 ½ 茶匙小苏打\n";
        cout << "7: 1 茶匙盐\n";
        cout << "8: 2 个大鸡蛋\n";
        cout << "9: 1 杯牛奶\n";
        cout << "10: ½ 杯植物油\n";
        cout << "11: 2 茶匙香草精\n";
        cout << "12: 1 杯开水\n\n";
        cout << "当你准备好所有材料时，请按 Enter 键...\n";
        cin.get();std::this_thread::sleep_for(std::chrono::seconds(2));

        cout << "步骤 1: 预热烤箱至 350 华氏度（175 摄氏度）。给两个 9 英寸圆形蛋糕模具涂抹油脂和面粉，或用烘焙纸铺底。\n";
        cout << "按 Enter 键准备下一步...\n";
        cin.get();std::this_thread::sleep_for(std::chrono::seconds(2));

        cout << "步骤 2: 在一个大碗中，将面粉、糖、可可粉、发酵粉、小苏打和盐混合。搅拌均匀。\n";
        cout << "按 Enter 键准备下一步...\n";
        cin.get();std::this_thread::sleep_for(std::chrono::seconds(2));

        cout << "步骤 3: 加入鸡蛋、牛奶、植物油和香草精。用中速搅拌至充分混合。加入开水（面糊会很稀）。\n";
        cout << "按 Enter 键准备下一步...\n";
        cin.get();std::this_thread::sleep_for(std::chrono::seconds(2));

        cout << "步骤 4: 将面糊均匀倒入准备好的模具中。放入预热的烤箱中烘烤 30-35 分钟，或直到插入中心的牙签干净地拔出。\n";
        cout << "按 Enter 键准备下一步...\n";
        cin.get();std::this_thread::sleep_for(std::chrono::seconds(2));

        cout << "步骤 5: 在模具中冷却 10 分钟，然后从模具中取出蛋糕，放在冷却架上完全冷却。\n";
        cout << "按 Enter 键完成蛋糕的制作和冷却...\n";
        cin.get();std::this_thread::sleep_for(std::chrono::seconds(2));

        cout << "恭喜你！巧克力蛋糕准备好可以享用了！\n";
    }
}

int main() {
    while (ccc == true) {
        cout << "Select the language:\n1: English\n2: العربية\n3: 中文\n[Warning: Languages other than English are translated]\nSelect: ";
        cin >> language;
    
        cout << "\n\nLOADING....\n\n";
        
        std::this_thread::sleep_for(std::chrono::seconds(2));
    
        if (language == 1) {
            ccc = false;
            english();
        } else if (language == 2) {
            ccc = false;
            arabic();
        } else if (language == 3) {
            ccc = false;
            chinese();
        } else {
            ccc = true;
            cout << "Error detected.";
            cout << "ERROR: NOT ONE OF THE CHOICES (1/2/3). PLEASE TRY AGAIN...\nError code: 101.\n\n\n\n";
        }
    }
    
}
