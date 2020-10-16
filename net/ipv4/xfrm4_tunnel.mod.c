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
	{ 0x94d5774d, "xfrm_unregister_type" },
	{ 0xbc98b21a, "xfrm4_tunnel_deregister" },
	{ 0xa46d5a85, "xfrm4_tunnel_register" },
	{ 0xc5850110, "printk" },
	{ 0xb0304352, "xfrm_register_type" },
	{ 0xf68b0045, "skb_push" },
	{ 0x8d2f4deb, "xfrm_input" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "tunnel4");


MODULE_INFO(srcversion, "30D96239C28F6F8E12362AA");
