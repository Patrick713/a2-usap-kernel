#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(.gnu.linkonce.this_module) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xe9942317, "module_layout" },
	{ 0x6b0d8f8, "nf_log_unregister" },
	{ 0x65e2bb05, "unregister_pernet_subsys" },
	{ 0x9764afbc, "nf_log_register" },
	{ 0xb041ec8d, "register_pernet_subsys" },
	{ 0x39e61495, "nf_logger_request_module" },
	{ 0x333d83b0, "nf_log_set" },
	{ 0xfc67d60e, "nf_log_unset" },
	{ 0x5b387524, "nf_log_l2packet" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "nf_log_common");


MODULE_INFO(srcversion, "D84460C958661675F869594");
