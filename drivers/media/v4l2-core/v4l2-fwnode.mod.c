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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xe9942317, "module_layout" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xe620347, "v4l2_async_register_subdev" },
	{ 0x291ed9a9, "fwnode_graph_get_remote_port_parent" },
	{ 0x39073ec3, "fwnode_handle_put" },
	{ 0x2bf85b8c, "of_node_name_eq" },
	{ 0xbaa535bf, "v4l2_async_subdev_notifier_register" },
	{ 0x7a577629, "v4l2_async_notifier_cleanup" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xd2a2ebc9, "v4l2_async_notifier_init" },
	{ 0xa3d3c370, "fwnode_get_next_parent" },
	{ 0x99b0d78e, "fwnode_device_is_available" },
	{ 0x500070c0, "v4l2_async_notifier_add_subdev" },
	{ 0xcc003eb1, "fwnode_property_present" },
	{ 0xf65110e8, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0xc5850110, "printk" },
	{ 0xcef92d3b, "v4l2_async_notifier_add_fwnode_subdev" },
	{ 0x101f7f12, "fwnode_property_read_u64_array" },
	{ 0x49d79425, "fwnode_property_read_u32_array" },
	{ 0x8b669ee3, "fwnode_graph_parse_endpoint" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0x82bf8fbb, "fwnode_get_parent" },
	{ 0x4e99b682, "fwnode_property_get_reference_args" },
	{ 0x86528aff, "fwnode_graph_get_port_parent" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0x3143432, "fwnode_graph_get_next_endpoint" },
	{ 0xc7f78938, "dev_fwnode" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x4f5ecd14, "fwnode_graph_get_remote_endpoint" },
	{ 0xe6affed8, "v4l2_async_notifier_unregister" },
	{ 0xd40c2daa, "of_fwnode_ops" },
};

MODULE_INFO(depends, "videodev");


MODULE_INFO(srcversion, "FED221F250A286BCF458CDD");
