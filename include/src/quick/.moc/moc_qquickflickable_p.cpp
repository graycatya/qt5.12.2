/****************************************************************************
** Meta object code from reading C++ file 'qquickflickable_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../items/qquickflickable_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquickflickable_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQuickFlickable_t {
    QByteArrayData data[122];
    char stringdata0[2013];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickFlickable_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickFlickable_t qt_meta_stringdata_QQuickFlickable = {
    {
QT_MOC_LITERAL(0, 0, 15), // "QQuickFlickable"
QT_MOC_LITERAL(1, 16, 15), // "DefaultProperty"
QT_MOC_LITERAL(2, 32, 13), // "flickableData"
QT_MOC_LITERAL(3, 46, 19), // "contentWidthChanged"
QT_MOC_LITERAL(4, 66, 0), // ""
QT_MOC_LITERAL(5, 67, 20), // "contentHeightChanged"
QT_MOC_LITERAL(6, 88, 15), // "contentXChanged"
QT_MOC_LITERAL(7, 104, 15), // "contentYChanged"
QT_MOC_LITERAL(8, 120, 16), // "topMarginChanged"
QT_MOC_LITERAL(9, 137, 19), // "bottomMarginChanged"
QT_MOC_LITERAL(10, 157, 17), // "leftMarginChanged"
QT_MOC_LITERAL(11, 175, 18), // "rightMarginChanged"
QT_MOC_LITERAL(12, 194, 14), // "originYChanged"
QT_MOC_LITERAL(13, 209, 14), // "originXChanged"
QT_MOC_LITERAL(14, 224, 13), // "movingChanged"
QT_MOC_LITERAL(15, 238, 25), // "movingHorizontallyChanged"
QT_MOC_LITERAL(16, 264, 23), // "movingVerticallyChanged"
QT_MOC_LITERAL(17, 288, 15), // "flickingChanged"
QT_MOC_LITERAL(18, 304, 27), // "flickingHorizontallyChanged"
QT_MOC_LITERAL(19, 332, 25), // "flickingVerticallyChanged"
QT_MOC_LITERAL(20, 358, 15), // "draggingChanged"
QT_MOC_LITERAL(21, 374, 27), // "draggingHorizontallyChanged"
QT_MOC_LITERAL(22, 402, 25), // "draggingVerticallyChanged"
QT_MOC_LITERAL(23, 428, 25), // "horizontalVelocityChanged"
QT_MOC_LITERAL(24, 454, 23), // "verticalVelocityChanged"
QT_MOC_LITERAL(25, 478, 19), // "isAtBoundaryChanged"
QT_MOC_LITERAL(26, 498, 25), // "flickableDirectionChanged"
QT_MOC_LITERAL(27, 524, 18), // "interactiveChanged"
QT_MOC_LITERAL(28, 543, 21), // "boundsBehaviorChanged"
QT_MOC_LITERAL(29, 565, 21), // "boundsMovementChanged"
QT_MOC_LITERAL(30, 587, 14), // "reboundChanged"
QT_MOC_LITERAL(31, 602, 27), // "maximumFlickVelocityChanged"
QT_MOC_LITERAL(32, 630, 24), // "flickDecelerationChanged"
QT_MOC_LITERAL(33, 655, 17), // "pressDelayChanged"
QT_MOC_LITERAL(34, 673, 15), // "movementStarted"
QT_MOC_LITERAL(35, 689, 13), // "movementEnded"
QT_MOC_LITERAL(36, 703, 12), // "flickStarted"
QT_MOC_LITERAL(37, 716, 10), // "flickEnded"
QT_MOC_LITERAL(38, 727, 11), // "dragStarted"
QT_MOC_LITERAL(39, 739, 9), // "dragEnded"
QT_MOC_LITERAL(40, 749, 19), // "pixelAlignedChanged"
QT_MOC_LITERAL(41, 769, 22), // "synchronousDragChanged"
QT_MOC_LITERAL(42, 792, 26), // "horizontalOvershootChanged"
QT_MOC_LITERAL(43, 819, 24), // "verticalOvershootChanged"
QT_MOC_LITERAL(44, 844, 13), // "atXEndChanged"
QT_MOC_LITERAL(45, 858, 13), // "atYEndChanged"
QT_MOC_LITERAL(46, 872, 19), // "atXBeginningChanged"
QT_MOC_LITERAL(47, 892, 19), // "atYBeginningChanged"
QT_MOC_LITERAL(48, 912, 16), // "movementStarting"
QT_MOC_LITERAL(49, 929, 14), // "movementEnding"
QT_MOC_LITERAL(50, 944, 15), // "hMovementEnding"
QT_MOC_LITERAL(51, 960, 15), // "vMovementEnding"
QT_MOC_LITERAL(52, 976, 25), // "velocityTimelineCompleted"
QT_MOC_LITERAL(53, 1002, 17), // "timelineCompleted"
QT_MOC_LITERAL(54, 1020, 13), // "resizeContent"
QT_MOC_LITERAL(55, 1034, 1), // "w"
QT_MOC_LITERAL(56, 1036, 1), // "h"
QT_MOC_LITERAL(57, 1038, 6), // "center"
QT_MOC_LITERAL(58, 1045, 14), // "returnToBounds"
QT_MOC_LITERAL(59, 1060, 5), // "flick"
QT_MOC_LITERAL(60, 1066, 9), // "xVelocity"
QT_MOC_LITERAL(61, 1076, 9), // "yVelocity"
QT_MOC_LITERAL(62, 1086, 11), // "cancelFlick"
QT_MOC_LITERAL(63, 1098, 12), // "contentWidth"
QT_MOC_LITERAL(64, 1111, 13), // "contentHeight"
QT_MOC_LITERAL(65, 1125, 8), // "contentX"
QT_MOC_LITERAL(66, 1134, 8), // "contentY"
QT_MOC_LITERAL(67, 1143, 11), // "contentItem"
QT_MOC_LITERAL(68, 1155, 11), // "QQuickItem*"
QT_MOC_LITERAL(69, 1167, 9), // "topMargin"
QT_MOC_LITERAL(70, 1177, 12), // "bottomMargin"
QT_MOC_LITERAL(71, 1190, 7), // "originY"
QT_MOC_LITERAL(72, 1198, 10), // "leftMargin"
QT_MOC_LITERAL(73, 1209, 11), // "rightMargin"
QT_MOC_LITERAL(74, 1221, 7), // "originX"
QT_MOC_LITERAL(75, 1229, 18), // "horizontalVelocity"
QT_MOC_LITERAL(76, 1248, 16), // "verticalVelocity"
QT_MOC_LITERAL(77, 1265, 14), // "boundsBehavior"
QT_MOC_LITERAL(78, 1280, 14), // "BoundsBehavior"
QT_MOC_LITERAL(79, 1295, 14), // "boundsMovement"
QT_MOC_LITERAL(80, 1310, 14), // "BoundsMovement"
QT_MOC_LITERAL(81, 1325, 7), // "rebound"
QT_MOC_LITERAL(82, 1333, 17), // "QQuickTransition*"
QT_MOC_LITERAL(83, 1351, 20), // "maximumFlickVelocity"
QT_MOC_LITERAL(84, 1372, 17), // "flickDeceleration"
QT_MOC_LITERAL(85, 1390, 6), // "moving"
QT_MOC_LITERAL(86, 1397, 18), // "movingHorizontally"
QT_MOC_LITERAL(87, 1416, 16), // "movingVertically"
QT_MOC_LITERAL(88, 1433, 8), // "flicking"
QT_MOC_LITERAL(89, 1442, 20), // "flickingHorizontally"
QT_MOC_LITERAL(90, 1463, 18), // "flickingVertically"
QT_MOC_LITERAL(91, 1482, 8), // "dragging"
QT_MOC_LITERAL(92, 1491, 20), // "draggingHorizontally"
QT_MOC_LITERAL(93, 1512, 18), // "draggingVertically"
QT_MOC_LITERAL(94, 1531, 18), // "flickableDirection"
QT_MOC_LITERAL(95, 1550, 18), // "FlickableDirection"
QT_MOC_LITERAL(96, 1569, 11), // "interactive"
QT_MOC_LITERAL(97, 1581, 10), // "pressDelay"
QT_MOC_LITERAL(98, 1592, 6), // "atXEnd"
QT_MOC_LITERAL(99, 1599, 6), // "atYEnd"
QT_MOC_LITERAL(100, 1606, 12), // "atXBeginning"
QT_MOC_LITERAL(101, 1619, 12), // "atYBeginning"
QT_MOC_LITERAL(102, 1632, 11), // "visibleArea"
QT_MOC_LITERAL(103, 1644, 27), // "QQuickFlickableVisibleArea*"
QT_MOC_LITERAL(104, 1672, 12), // "pixelAligned"
QT_MOC_LITERAL(105, 1685, 15), // "synchronousDrag"
QT_MOC_LITERAL(106, 1701, 19), // "horizontalOvershoot"
QT_MOC_LITERAL(107, 1721, 17), // "verticalOvershoot"
QT_MOC_LITERAL(108, 1739, 25), // "QQmlListProperty<QObject>"
QT_MOC_LITERAL(109, 1765, 17), // "flickableChildren"
QT_MOC_LITERAL(110, 1783, 28), // "QQmlListProperty<QQuickItem>"
QT_MOC_LITERAL(111, 1812, 18), // "BoundsBehaviorFlag"
QT_MOC_LITERAL(112, 1831, 12), // "StopAtBounds"
QT_MOC_LITERAL(113, 1844, 14), // "DragOverBounds"
QT_MOC_LITERAL(114, 1859, 15), // "OvershootBounds"
QT_MOC_LITERAL(115, 1875, 22), // "DragAndOvershootBounds"
QT_MOC_LITERAL(116, 1898, 20), // "FollowBoundsBehavior"
QT_MOC_LITERAL(117, 1919, 18), // "AutoFlickDirection"
QT_MOC_LITERAL(118, 1938, 15), // "HorizontalFlick"
QT_MOC_LITERAL(119, 1954, 13), // "VerticalFlick"
QT_MOC_LITERAL(120, 1968, 26), // "HorizontalAndVerticalFlick"
QT_MOC_LITERAL(121, 1995, 17) // "AutoFlickIfNeeded"

    },
    "QQuickFlickable\0DefaultProperty\0"
    "flickableData\0contentWidthChanged\0\0"
    "contentHeightChanged\0contentXChanged\0"
    "contentYChanged\0topMarginChanged\0"
    "bottomMarginChanged\0leftMarginChanged\0"
    "rightMarginChanged\0originYChanged\0"
    "originXChanged\0movingChanged\0"
    "movingHorizontallyChanged\0"
    "movingVerticallyChanged\0flickingChanged\0"
    "flickingHorizontallyChanged\0"
    "flickingVerticallyChanged\0draggingChanged\0"
    "draggingHorizontallyChanged\0"
    "draggingVerticallyChanged\0"
    "horizontalVelocityChanged\0"
    "verticalVelocityChanged\0isAtBoundaryChanged\0"
    "flickableDirectionChanged\0interactiveChanged\0"
    "boundsBehaviorChanged\0boundsMovementChanged\0"
    "reboundChanged\0maximumFlickVelocityChanged\0"
    "flickDecelerationChanged\0pressDelayChanged\0"
    "movementStarted\0movementEnded\0"
    "flickStarted\0flickEnded\0dragStarted\0"
    "dragEnded\0pixelAlignedChanged\0"
    "synchronousDragChanged\0"
    "horizontalOvershootChanged\0"
    "verticalOvershootChanged\0atXEndChanged\0"
    "atYEndChanged\0atXBeginningChanged\0"
    "atYBeginningChanged\0movementStarting\0"
    "movementEnding\0hMovementEnding\0"
    "vMovementEnding\0velocityTimelineCompleted\0"
    "timelineCompleted\0resizeContent\0w\0h\0"
    "center\0returnToBounds\0flick\0xVelocity\0"
    "yVelocity\0cancelFlick\0contentWidth\0"
    "contentHeight\0contentX\0contentY\0"
    "contentItem\0QQuickItem*\0topMargin\0"
    "bottomMargin\0originY\0leftMargin\0"
    "rightMargin\0originX\0horizontalVelocity\0"
    "verticalVelocity\0boundsBehavior\0"
    "BoundsBehavior\0boundsMovement\0"
    "BoundsMovement\0rebound\0QQuickTransition*\0"
    "maximumFlickVelocity\0flickDeceleration\0"
    "moving\0movingHorizontally\0movingVertically\0"
    "flicking\0flickingHorizontally\0"
    "flickingVertically\0dragging\0"
    "draggingHorizontally\0draggingVertically\0"
    "flickableDirection\0FlickableDirection\0"
    "interactive\0pressDelay\0atXEnd\0atYEnd\0"
    "atXBeginning\0atYBeginning\0visibleArea\0"
    "QQuickFlickableVisibleArea*\0pixelAligned\0"
    "synchronousDrag\0horizontalOvershoot\0"
    "verticalOvershoot\0QQmlListProperty<QObject>\0"
    "flickableChildren\0QQmlListProperty<QQuickItem>\0"
    "BoundsBehaviorFlag\0StopAtBounds\0"
    "DragOverBounds\0OvershootBounds\0"
    "DragAndOvershootBounds\0FollowBoundsBehavior\0"
    "AutoFlickDirection\0HorizontalFlick\0"
    "VerticalFlick\0HorizontalAndVerticalFlick\0"
    "AutoFlickIfNeeded"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickFlickable[] = {

 // content:
       8,       // revision
       0,       // classname
       1,   14, // classinfo
      53,   16, // methods
      41,  401, // properties
       3,  606, // enums/sets
       0,    0, // constructors
       0,       // flags
      44,       // signalCount

 // classinfo: key, value
       1,    2,

 // signals: name, argc, parameters, tag, flags
       3,    0,  334,    4, 0x06 /* Public */,
       5,    0,  335,    4, 0x06 /* Public */,
       6,    0,  336,    4, 0x06 /* Public */,
       7,    0,  337,    4, 0x06 /* Public */,
       8,    0,  338,    4, 0x06 /* Public */,
       9,    0,  339,    4, 0x06 /* Public */,
      10,    0,  340,    4, 0x06 /* Public */,
      11,    0,  341,    4, 0x06 /* Public */,
      12,    0,  342,    4, 0x06 /* Public */,
      13,    0,  343,    4, 0x06 /* Public */,
      14,    0,  344,    4, 0x06 /* Public */,
      15,    0,  345,    4, 0x06 /* Public */,
      16,    0,  346,    4, 0x06 /* Public */,
      17,    0,  347,    4, 0x06 /* Public */,
      18,    0,  348,    4, 0x06 /* Public */,
      19,    0,  349,    4, 0x06 /* Public */,
      20,    0,  350,    4, 0x06 /* Public */,
      21,    0,  351,    4, 0x06 /* Public */,
      22,    0,  352,    4, 0x06 /* Public */,
      23,    0,  353,    4, 0x06 /* Public */,
      24,    0,  354,    4, 0x06 /* Public */,
      25,    0,  355,    4, 0x06 /* Public */,
      26,    0,  356,    4, 0x06 /* Public */,
      27,    0,  357,    4, 0x06 /* Public */,
      28,    0,  358,    4, 0x06 /* Public */,
      29,    0,  359,    4, 0x86 /* Public | MethodRevisioned */,
      30,    0,  360,    4, 0x06 /* Public */,
      31,    0,  361,    4, 0x06 /* Public */,
      32,    0,  362,    4, 0x06 /* Public */,
      33,    0,  363,    4, 0x06 /* Public */,
      34,    0,  364,    4, 0x06 /* Public */,
      35,    0,  365,    4, 0x06 /* Public */,
      36,    0,  366,    4, 0x06 /* Public */,
      37,    0,  367,    4, 0x06 /* Public */,
      38,    0,  368,    4, 0x06 /* Public */,
      39,    0,  369,    4, 0x06 /* Public */,
      40,    0,  370,    4, 0x06 /* Public */,
      41,    0,  371,    4, 0x86 /* Public | MethodRevisioned */,
      42,    0,  372,    4, 0x86 /* Public | MethodRevisioned */,
      43,    0,  373,    4, 0x86 /* Public | MethodRevisioned */,
      44,    0,  374,    4, 0x06 /* Public */,
      45,    0,  375,    4, 0x06 /* Public */,
      46,    0,  376,    4, 0x06 /* Public */,
      47,    0,  377,    4, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      48,    0,  378,    4, 0x09 /* Protected */,
      49,    0,  379,    4, 0x09 /* Protected */,
      49,    2,  380,    4, 0x09 /* Protected */,
      52,    0,  385,    4, 0x09 /* Protected */,
      53,    0,  386,    4, 0x09 /* Protected */,

 // methods: name, argc, parameters, tag, flags
      54,    3,  387,    4, 0x02 /* Public */,
      58,    0,  394,    4, 0x02 /* Public */,
      59,    2,  395,    4, 0x02 /* Public */,
      62,    0,  400,    4, 0x02 /* Public */,

 // signals: revision
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
      10,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
      12,
       9,
       9,
       0,
       0,
       0,
       0,

 // slots: revision
       0,
       0,
       0,
       0,
       0,

 // methods: revision
       0,
       0,
       0,
       0,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool,   50,   51,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::QReal, QMetaType::QReal, QMetaType::QPointF,   55,   56,   57,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QReal, QMetaType::QReal,   60,   61,
    QMetaType::Void,

 // properties: name, type, flags
      63, QMetaType::QReal, 0x00495103,
      64, QMetaType::QReal, 0x00495103,
      65, QMetaType::QReal, 0x00495103,
      66, QMetaType::QReal, 0x00495103,
      67, 0x80000000 | 68, 0x00095409,
      69, QMetaType::QReal, 0x00495103,
      70, QMetaType::QReal, 0x00495103,
      71, QMetaType::QReal, 0x00495001,
      72, QMetaType::QReal, 0x00495103,
      73, QMetaType::QReal, 0x00495103,
      74, QMetaType::QReal, 0x00495001,
      75, QMetaType::QReal, 0x00495001,
      76, QMetaType::QReal, 0x00495001,
      77, 0x80000000 | 78, 0x0049510b,
      79, 0x80000000 | 80, 0x00c9510b,
      81, 0x80000000 | 82, 0x0049510b,
      83, QMetaType::QReal, 0x00495103,
      84, QMetaType::QReal, 0x00495103,
      85, QMetaType::Bool, 0x00495001,
      86, QMetaType::Bool, 0x00495001,
      87, QMetaType::Bool, 0x00495001,
      88, QMetaType::Bool, 0x00495001,
      89, QMetaType::Bool, 0x00495001,
      90, QMetaType::Bool, 0x00495001,
      91, QMetaType::Bool, 0x00495001,
      92, QMetaType::Bool, 0x00495001,
      93, QMetaType::Bool, 0x00495001,
      94, 0x80000000 | 95, 0x0049510b,
      96, QMetaType::Bool, 0x00495103,
      97, QMetaType::Int, 0x00495103,
      98, QMetaType::Bool, 0x00495001,
      99, QMetaType::Bool, 0x00495001,
     100, QMetaType::Bool, 0x00495001,
     101, QMetaType::Bool, 0x00495001,
     102, 0x80000000 | 103, 0x00095409,
     104, QMetaType::Bool, 0x00495103,
     105, QMetaType::Bool, 0x00c95103,
     106, QMetaType::QReal, 0x00c95001,
     107, QMetaType::QReal, 0x00c95001,
       2, 0x80000000 | 108, 0x00095009,
     109, 0x80000000 | 110, 0x00095009,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       0,
       4,
       5,
       8,
       6,
       7,
       9,
      19,
      20,
      24,
      25,
      26,
      27,
      28,
      10,
      11,
      12,
      13,
      14,
      15,
      16,
      17,
      18,
      22,
      23,
      29,
      40,
      41,
      42,
      43,
       0,
      36,
      37,
      38,
      39,
       0,
       0,

 // properties: revision
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
      10,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
      12,
       9,
       9,
       0,
       0,

 // enums: name, alias, flags, count, data
      78,  111, 0x1,    4,  621,
      80,   80, 0x0,    1,  629,
      95,   95, 0x0,    5,  631,

 // enum data: key, value
     112, uint(QQuickFlickable::StopAtBounds),
     113, uint(QQuickFlickable::DragOverBounds),
     114, uint(QQuickFlickable::OvershootBounds),
     115, uint(QQuickFlickable::DragAndOvershootBounds),
     116, uint(QQuickFlickable::FollowBoundsBehavior),
     117, uint(QQuickFlickable::AutoFlickDirection),
     118, uint(QQuickFlickable::HorizontalFlick),
     119, uint(QQuickFlickable::VerticalFlick),
     120, uint(QQuickFlickable::HorizontalAndVerticalFlick),
     121, uint(QQuickFlickable::AutoFlickIfNeeded),

       0        // eod
};

void QQuickFlickable::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QQuickFlickable *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->contentWidthChanged(); break;
        case 1: _t->contentHeightChanged(); break;
        case 2: _t->contentXChanged(); break;
        case 3: _t->contentYChanged(); break;
        case 4: _t->topMarginChanged(); break;
        case 5: _t->bottomMarginChanged(); break;
        case 6: _t->leftMarginChanged(); break;
        case 7: _t->rightMarginChanged(); break;
        case 8: _t->originYChanged(); break;
        case 9: _t->originXChanged(); break;
        case 10: _t->movingChanged(); break;
        case 11: _t->movingHorizontallyChanged(); break;
        case 12: _t->movingVerticallyChanged(); break;
        case 13: _t->flickingChanged(); break;
        case 14: _t->flickingHorizontallyChanged(); break;
        case 15: _t->flickingVerticallyChanged(); break;
        case 16: _t->draggingChanged(); break;
        case 17: _t->draggingHorizontallyChanged(); break;
        case 18: _t->draggingVerticallyChanged(); break;
        case 19: _t->horizontalVelocityChanged(); break;
        case 20: _t->verticalVelocityChanged(); break;
        case 21: _t->isAtBoundaryChanged(); break;
        case 22: _t->flickableDirectionChanged(); break;
        case 23: _t->interactiveChanged(); break;
        case 24: _t->boundsBehaviorChanged(); break;
        case 25: _t->boundsMovementChanged(); break;
        case 26: _t->reboundChanged(); break;
        case 27: _t->maximumFlickVelocityChanged(); break;
        case 28: _t->flickDecelerationChanged(); break;
        case 29: _t->pressDelayChanged(); break;
        case 30: _t->movementStarted(); break;
        case 31: _t->movementEnded(); break;
        case 32: _t->flickStarted(); break;
        case 33: _t->flickEnded(); break;
        case 34: _t->dragStarted(); break;
        case 35: _t->dragEnded(); break;
        case 36: _t->pixelAlignedChanged(); break;
        case 37: _t->synchronousDragChanged(); break;
        case 38: _t->horizontalOvershootChanged(); break;
        case 39: _t->verticalOvershootChanged(); break;
        case 40: _t->atXEndChanged(); break;
        case 41: _t->atYEndChanged(); break;
        case 42: _t->atXBeginningChanged(); break;
        case 43: _t->atYBeginningChanged(); break;
        case 44: _t->movementStarting(); break;
        case 45: _t->movementEnding(); break;
        case 46: _t->movementEnding((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 47: _t->velocityTimelineCompleted(); break;
        case 48: _t->timelineCompleted(); break;
        case 49: _t->resizeContent((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< QPointF(*)>(_a[3]))); break;
        case 50: _t->returnToBounds(); break;
        case 51: _t->flick((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 52: _t->cancelFlick(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QQuickFlickable::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickFlickable::contentWidthChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QQuickFlickable::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickFlickable::contentHeightChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QQuickFlickable::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickFlickable::contentXChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QQuickFlickable::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickFlickable::contentYChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (QQuickFlickable::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickFlickable::topMarginChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (QQuickFlickable::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickFlickable::bottomMarginChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (QQuickFlickable::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickFlickable::leftMarginChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (QQuickFlickable::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickFlickable::rightMarginChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (QQuickFlickable::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickFlickable::originYChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (QQuickFlickable::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickFlickable::originXChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (QQuickFlickable::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickFlickable::movingChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (QQuickFlickable::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickFlickable::movingHorizontallyChanged)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (QQuickFlickable::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickFlickable::movingVerticallyChanged)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (QQuickFlickable::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickFlickable::flickingChanged)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (QQuickFlickable::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickFlickable::flickingHorizontallyChanged)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (QQuickFlickable::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickFlickable::flickingVerticallyChanged)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (QQuickFlickable::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickFlickable::draggingChanged)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (QQuickFlickable::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickFlickable::draggingHorizontallyChanged)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (QQuickFlickable::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickFlickable::draggingVerticallyChanged)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (QQuickFlickable::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickFlickable::horizontalVelocityChanged)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (QQuickFlickable::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickFlickable::verticalVelocityChanged)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (QQuickFlickable::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickFlickable::isAtBoundaryChanged)) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (QQuickFlickable::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickFlickable::flickableDirectionChanged)) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (QQuickFlickable::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickFlickable::interactiveChanged)) {
                *result = 23;
                return;
            }
        }
        {
            using _t = void (QQuickFlickable::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickFlickable::boundsBehaviorChanged)) {
                *result = 24;
                return;
            }
        }
        {
            using _t = void (QQuickFlickable::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickFlickable::boundsMovementChanged)) {
                *result = 25;
                return;
            }
        }
        {
            using _t = void (QQuickFlickable::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickFlickable::reboundChanged)) {
                *result = 26;
                return;
            }
        }
        {
            using _t = void (QQuickFlickable::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickFlickable::maximumFlickVelocityChanged)) {
                *result = 27;
                return;
            }
        }
        {
            using _t = void (QQuickFlickable::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickFlickable::flickDecelerationChanged)) {
                *result = 28;
                return;
            }
        }
        {
            using _t = void (QQuickFlickable::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickFlickable::pressDelayChanged)) {
                *result = 29;
                return;
            }
        }
        {
            using _t = void (QQuickFlickable::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickFlickable::movementStarted)) {
                *result = 30;
                return;
            }
        }
        {
            using _t = void (QQuickFlickable::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickFlickable::movementEnded)) {
                *result = 31;
                return;
            }
        }
        {
            using _t = void (QQuickFlickable::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickFlickable::flickStarted)) {
                *result = 32;
                return;
            }
        }
        {
            using _t = void (QQuickFlickable::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickFlickable::flickEnded)) {
                *result = 33;
                return;
            }
        }
        {
            using _t = void (QQuickFlickable::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickFlickable::dragStarted)) {
                *result = 34;
                return;
            }
        }
        {
            using _t = void (QQuickFlickable::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickFlickable::dragEnded)) {
                *result = 35;
                return;
            }
        }
        {
            using _t = void (QQuickFlickable::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickFlickable::pixelAlignedChanged)) {
                *result = 36;
                return;
            }
        }
        {
            using _t = void (QQuickFlickable::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickFlickable::synchronousDragChanged)) {
                *result = 37;
                return;
            }
        }
        {
            using _t = void (QQuickFlickable::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickFlickable::horizontalOvershootChanged)) {
                *result = 38;
                return;
            }
        }
        {
            using _t = void (QQuickFlickable::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickFlickable::verticalOvershootChanged)) {
                *result = 39;
                return;
            }
        }
        {
            using _t = void (QQuickFlickable::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickFlickable::atXEndChanged)) {
                *result = 40;
                return;
            }
        }
        {
            using _t = void (QQuickFlickable::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickFlickable::atYEndChanged)) {
                *result = 41;
                return;
            }
        }
        {
            using _t = void (QQuickFlickable::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickFlickable::atXBeginningChanged)) {
                *result = 42;
                return;
            }
        }
        {
            using _t = void (QQuickFlickable::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickFlickable::atYBeginningChanged)) {
                *result = 43;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 39:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQmlListProperty<QObject> >(); break;
        case 40:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQmlListProperty<QQuickItem> >(); break;
        case 4:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickItem* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QQuickFlickable *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->contentWidth(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->contentHeight(); break;
        case 2: *reinterpret_cast< qreal*>(_v) = _t->contentX(); break;
        case 3: *reinterpret_cast< qreal*>(_v) = _t->contentY(); break;
        case 4: *reinterpret_cast< QQuickItem**>(_v) = _t->contentItem(); break;
        case 5: *reinterpret_cast< qreal*>(_v) = _t->topMargin(); break;
        case 6: *reinterpret_cast< qreal*>(_v) = _t->bottomMargin(); break;
        case 7: *reinterpret_cast< qreal*>(_v) = _t->originY(); break;
        case 8: *reinterpret_cast< qreal*>(_v) = _t->leftMargin(); break;
        case 9: *reinterpret_cast< qreal*>(_v) = _t->rightMargin(); break;
        case 10: *reinterpret_cast< qreal*>(_v) = _t->originX(); break;
        case 11: *reinterpret_cast< qreal*>(_v) = _t->horizontalVelocity(); break;
        case 12: *reinterpret_cast< qreal*>(_v) = _t->verticalVelocity(); break;
        case 13: *reinterpret_cast<int*>(_v) = QFlag(_t->boundsBehavior()); break;
        case 14: *reinterpret_cast< BoundsMovement*>(_v) = _t->boundsMovement(); break;
        case 15: *reinterpret_cast< QQuickTransition**>(_v) = _t->rebound(); break;
        case 16: *reinterpret_cast< qreal*>(_v) = _t->maximumFlickVelocity(); break;
        case 17: *reinterpret_cast< qreal*>(_v) = _t->flickDeceleration(); break;
        case 18: *reinterpret_cast< bool*>(_v) = _t->isMoving(); break;
        case 19: *reinterpret_cast< bool*>(_v) = _t->isMovingHorizontally(); break;
        case 20: *reinterpret_cast< bool*>(_v) = _t->isMovingVertically(); break;
        case 21: *reinterpret_cast< bool*>(_v) = _t->isFlicking(); break;
        case 22: *reinterpret_cast< bool*>(_v) = _t->isFlickingHorizontally(); break;
        case 23: *reinterpret_cast< bool*>(_v) = _t->isFlickingVertically(); break;
        case 24: *reinterpret_cast< bool*>(_v) = _t->isDragging(); break;
        case 25: *reinterpret_cast< bool*>(_v) = _t->isDraggingHorizontally(); break;
        case 26: *reinterpret_cast< bool*>(_v) = _t->isDraggingVertically(); break;
        case 27: *reinterpret_cast< FlickableDirection*>(_v) = _t->flickableDirection(); break;
        case 28: *reinterpret_cast< bool*>(_v) = _t->isInteractive(); break;
        case 29: *reinterpret_cast< int*>(_v) = _t->pressDelay(); break;
        case 30: *reinterpret_cast< bool*>(_v) = _t->isAtXEnd(); break;
        case 31: *reinterpret_cast< bool*>(_v) = _t->isAtYEnd(); break;
        case 32: *reinterpret_cast< bool*>(_v) = _t->isAtXBeginning(); break;
        case 33: *reinterpret_cast< bool*>(_v) = _t->isAtYBeginning(); break;
        case 34: *reinterpret_cast< QQuickFlickableVisibleArea**>(_v) = _t->visibleArea(); break;
        case 35: *reinterpret_cast< bool*>(_v) = _t->pixelAligned(); break;
        case 36: *reinterpret_cast< bool*>(_v) = _t->synchronousDrag(); break;
        case 37: *reinterpret_cast< qreal*>(_v) = _t->horizontalOvershoot(); break;
        case 38: *reinterpret_cast< qreal*>(_v) = _t->verticalOvershoot(); break;
        case 39: *reinterpret_cast< QQmlListProperty<QObject>*>(_v) = _t->flickableData(); break;
        case 40: *reinterpret_cast< QQmlListProperty<QQuickItem>*>(_v) = _t->flickableChildren(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QQuickFlickable *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setContentWidth(*reinterpret_cast< qreal*>(_v)); break;
        case 1: _t->setContentHeight(*reinterpret_cast< qreal*>(_v)); break;
        case 2: _t->setContentX(*reinterpret_cast< qreal*>(_v)); break;
        case 3: _t->setContentY(*reinterpret_cast< qreal*>(_v)); break;
        case 5: _t->setTopMargin(*reinterpret_cast< qreal*>(_v)); break;
        case 6: _t->setBottomMargin(*reinterpret_cast< qreal*>(_v)); break;
        case 8: _t->setLeftMargin(*reinterpret_cast< qreal*>(_v)); break;
        case 9: _t->setRightMargin(*reinterpret_cast< qreal*>(_v)); break;
        case 13: _t->setBoundsBehavior(QFlag(*reinterpret_cast<int*>(_v))); break;
        case 14: _t->setBoundsMovement(*reinterpret_cast< BoundsMovement*>(_v)); break;
        case 15: _t->setRebound(*reinterpret_cast< QQuickTransition**>(_v)); break;
        case 16: _t->setMaximumFlickVelocity(*reinterpret_cast< qreal*>(_v)); break;
        case 17: _t->setFlickDeceleration(*reinterpret_cast< qreal*>(_v)); break;
        case 27: _t->setFlickableDirection(*reinterpret_cast< FlickableDirection*>(_v)); break;
        case 28: _t->setInteractive(*reinterpret_cast< bool*>(_v)); break;
        case 29: _t->setPressDelay(*reinterpret_cast< int*>(_v)); break;
        case 35: _t->setPixelAligned(*reinterpret_cast< bool*>(_v)); break;
        case 36: _t->setSynchronousDrag(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject QQuickFlickable::staticMetaObject = { {
    &QQuickItem::staticMetaObject,
    qt_meta_stringdata_QQuickFlickable.data,
    qt_meta_data_QQuickFlickable,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QQuickFlickable::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickFlickable::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickFlickable.stringdata0))
        return static_cast<void*>(this);
    return QQuickItem::qt_metacast(_clname);
}

int QQuickFlickable::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 53)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 53;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 53)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 53;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 41;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 41;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 41;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 41;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 41;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 41;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QQuickFlickable::contentWidthChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QQuickFlickable::contentHeightChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QQuickFlickable::contentXChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QQuickFlickable::contentYChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QQuickFlickable::topMarginChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void QQuickFlickable::bottomMarginChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void QQuickFlickable::leftMarginChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void QQuickFlickable::rightMarginChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void QQuickFlickable::originYChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void QQuickFlickable::originXChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void QQuickFlickable::movingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void QQuickFlickable::movingHorizontallyChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void QQuickFlickable::movingVerticallyChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void QQuickFlickable::flickingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void QQuickFlickable::flickingHorizontallyChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}

// SIGNAL 15
void QQuickFlickable::flickingVerticallyChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 15, nullptr);
}

// SIGNAL 16
void QQuickFlickable::draggingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 16, nullptr);
}

// SIGNAL 17
void QQuickFlickable::draggingHorizontallyChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 17, nullptr);
}

// SIGNAL 18
void QQuickFlickable::draggingVerticallyChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 18, nullptr);
}

// SIGNAL 19
void QQuickFlickable::horizontalVelocityChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 19, nullptr);
}

// SIGNAL 20
void QQuickFlickable::verticalVelocityChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 20, nullptr);
}

// SIGNAL 21
void QQuickFlickable::isAtBoundaryChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 21, nullptr);
}

// SIGNAL 22
void QQuickFlickable::flickableDirectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 22, nullptr);
}

// SIGNAL 23
void QQuickFlickable::interactiveChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 23, nullptr);
}

// SIGNAL 24
void QQuickFlickable::boundsBehaviorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 24, nullptr);
}

// SIGNAL 25
void QQuickFlickable::boundsMovementChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 25, nullptr);
}

// SIGNAL 26
void QQuickFlickable::reboundChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 26, nullptr);
}

// SIGNAL 27
void QQuickFlickable::maximumFlickVelocityChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 27, nullptr);
}

// SIGNAL 28
void QQuickFlickable::flickDecelerationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 28, nullptr);
}

// SIGNAL 29
void QQuickFlickable::pressDelayChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 29, nullptr);
}

// SIGNAL 30
void QQuickFlickable::movementStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 30, nullptr);
}

// SIGNAL 31
void QQuickFlickable::movementEnded()
{
    QMetaObject::activate(this, &staticMetaObject, 31, nullptr);
}

// SIGNAL 32
void QQuickFlickable::flickStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 32, nullptr);
}

// SIGNAL 33
void QQuickFlickable::flickEnded()
{
    QMetaObject::activate(this, &staticMetaObject, 33, nullptr);
}

// SIGNAL 34
void QQuickFlickable::dragStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 34, nullptr);
}

// SIGNAL 35
void QQuickFlickable::dragEnded()
{
    QMetaObject::activate(this, &staticMetaObject, 35, nullptr);
}

// SIGNAL 36
void QQuickFlickable::pixelAlignedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 36, nullptr);
}

// SIGNAL 37
void QQuickFlickable::synchronousDragChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 37, nullptr);
}

// SIGNAL 38
void QQuickFlickable::horizontalOvershootChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 38, nullptr);
}

// SIGNAL 39
void QQuickFlickable::verticalOvershootChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 39, nullptr);
}

// SIGNAL 40
void QQuickFlickable::atXEndChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 40, nullptr);
}

// SIGNAL 41
void QQuickFlickable::atYEndChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 41, nullptr);
}

// SIGNAL 42
void QQuickFlickable::atXBeginningChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 42, nullptr);
}

// SIGNAL 43
void QQuickFlickable::atYBeginningChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 43, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
