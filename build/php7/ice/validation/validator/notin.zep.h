
extern zend_class_entry *ice_validation_validator_notin_ce;

ZEPHIR_INIT_CLASS(Ice_Validation_Validator_NotIn);

PHP_METHOD(Ice_Validation_Validator_NotIn, validate);

ZEND_BEGIN_ARG_INFO_EX(arginfo_ice_validation_validator_notin_validate, 0, 0, 2)
	ZEND_ARG_OBJ_INFO(0, validation, Ice\\Validation, 0)
	ZEND_ARG_INFO(0, field)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(ice_validation_validator_notin_method_entry) {
	PHP_ME(Ice_Validation_Validator_NotIn, validate, arginfo_ice_validation_validator_notin_validate, ZEND_ACC_PUBLIC)
	PHP_FE_END
};
