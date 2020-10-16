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
	{ 0xfe41fb0b, "param_ops_bool" },
	{ 0x9cd4091f, "rtnl_link_unregister" },
	{ 0xbc20d5eb, "rtnl_link_register" },
	{ 0xc5850110, "printk" },
	{ 0x80df3806, "netif_rx_ni" },
	{ 0xd04e2845, "sock_efree" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x36f6c5e6, "skb_clone" },
	{ 0xd28c75bb, "kfree_skb" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xa46a0f7a, "consume_skb" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "E621914F3F3ED405C5F3A4A");
