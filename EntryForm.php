<<<<<<< HEAD
<?php

namespace app\models;
 
use Yii;
use yii\base\Model;

class EntryForm extends Model
{
    public $name;
    public $email;

    public function rules()
    {
        return [
            [['name','email'],'required'],
            ['email','email'],
        ];
    }
}
=======
<?php

namespace app\models;
 
use Yii;
use yii\base\Model;

class EntryForm extends Model
{
    public $name;
    public $email;

    public function rules()
    {
        return [
            [['name','email'],'required'],
            ['email','email'],
        ];
    }
}
>>>>>>> c7894b054e0f7eae26687c5023d89436be0ec2b9
